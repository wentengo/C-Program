#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int main()
{
	char a[] = "*************";
	char b[] = "             ";
	char c[] = "             ";
	int left1 = 5;
	int left2 = 0;
	int right1 = 7;
	int right2 = 12;
	b[6] = a[6];
	printf("%s\n", b);
	while (left1 >= 0 && right1 <= 12)
	{
		b[left1] = a[left1];
		b[right1] = a[right1];
		left1--;
		right1++;
		printf("%s\n", b);
	}
	while (left2 <= right2)
	{
		b[left2] = c[left2];
		b[right2] = c[right2];
		left2++;
		right2--;
		printf("%s\n", b);
	}
	getchar();
	return 0;
}