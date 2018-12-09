#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[], char *envp[])
{
	int ret = 0;
	if (argc != 4)
		printf("0\n");
	if (argv[1][0] == '-')
	{
		switch (argv[1][1])
		{
		case 'a':ret = atoi(argv[2]) + atoi(argv[3]);
			break;
		case 's':ret = atoi(argv[2]) - atoi(argv[3]);
			break;
		case 'm':ret = atoi(argv[2]) * atoi(argv[3]);
			break;
		case 'd':ret = atoi(argv[2]) / atoi(argv[3]);
			break;
		default:printf("0\n");
			break;
		}
		printf("%d", ret);
	}
	return 0;
}