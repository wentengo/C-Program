#include "stdio.h"
#define N 10
int main()
{
	int i, j, k;
	int A[N] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int B[N] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int C[N];
	for (i = 0; i <= N; i++)
		C[i] = A[i];
	printf("����������A��������:");
	for (j = 0; j <= N; j++)
	{
		A[j] = B[j];
		printf(" %d", A[j]);
	}
	printf("\n����������B��������:");
	for (k = 0; k <= N; k++)
	{
		B[k] = C[k];
		printf(" %d", B[k]);
	}
	printf("\n");
	getchar();
	return 0;
}