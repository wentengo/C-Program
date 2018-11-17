#include<stdio.h>
int main()
{
	int i;
	printf("ÇëÊäÈë×Ö·û");
	while ((i = getchar()) != EOF)
	{
		if (i >= 'a'&&i <= 'z')
		{
			putchar(i - 32);
			printf("\n");
		}	
		else if (i >= 'A'&&i <= 'Z')
		{
			putchar(i + 32);
			printf("\n");
		}
		else if (i >= 0 && i <= 9)
		{
			putchar(NULL);
		}
	}
	return 0;
}