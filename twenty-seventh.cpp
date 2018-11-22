#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

void init(int arr[])
{
	int i;
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
}

void empty(int arr[])
{
	int i;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
		printf("%d=%d ", i,arr[i]);
	}
}

void reverse(int arr[])
{
	int i;
	for (i = 0; i < 10/2; i++)
	{
		arr[i] = arr[i] + arr[9 - i];
		arr[9 - i] = arr[i] - arr[9 - i];
		arr[i] = arr[i] - arr[9 - i];
	}
	for (i = 0; i < 10; i++)
		printf("%d=%d ", i,arr[i]);	
}

int main()
{
	int arr[10] = { 0 };
	printf("\n��ʼ������:>");
	init(arr);
	printf("\n�������:>");
	reverse(arr);
	printf("\n��������:>");
	empty(arr);
	printf("\n");
	getchar();
	return 0;
}