#define _CRT_SECURE_NO_DEPRECATE
#ifndef _TELEPHINE__H_
#define _TELEPHINE__H_

#include "stdio.h"
#include "assert.h"
#include "string.h"
#include "stdlib.h"

#define MAX 1000

typedef struct Telephone
{
	char name[20];
	char sex[20];
	int age;
	char phone[20];
	char address[20];
}TPhone, *pTPhone;

typedef struct TL
{
	int max;
	int size;
	pTPhone telephone;
}TL, *pTL;

void Init(pTL tele);
void Insert(pTL tele);
void Remove(pTL tele);
void Find(pTL tele);
void Revise(pTL tele);
void Destory(pTL tele);
void Print(pTL tele);
void Order(pTL tele);
void WriteFile(pTL tele);

#endif