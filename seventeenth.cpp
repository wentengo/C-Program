#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]);
	int x,i;
	scanf("%d", &x);
	while (left <= right)
	{
		i = left + (right - left) / 2;
		if (x < arr[i])
			right = i-1;
		if (x>arr[i])
			left = i + 1;
		else
			break;
	}
	if (left <= right)
		printf("%d", i);
	else
		printf("%d", -1);
	return 0;
}