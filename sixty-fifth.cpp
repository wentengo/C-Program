#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int cmd(const void *p1, const void *p2)
{
	return (*(int*)p1 > *(int*)p2);
}

void swap(void *p1, void *p2, int size)
{
	for (int i = 0; i < size; i++)
	{
		char tmp = *((char*)p1 + i);
		*((char*)p1 + i) = *((char*)p2 + i);
		*((char*)p2 + i) = tmp;
	}
}

void test(void *base, int count, int size, int(*cmp)(const void *p1, const void *p2))
{
	int i = 0, j = 0;
	for (i = 0; i < count - 1; i++)
	{
		for (j = 0; j < count - i - 1; j++)
		{
			if (cmp((char*)base + j*size, (char*)base + (j + 1)*size)>0)
				swap((char*)base + j*size, (char*)base + (j + 1)*size, size);
		}
	}
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	test(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), cmd);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}