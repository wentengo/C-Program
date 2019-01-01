#include "telephine.h"

void Init(pTL tele)
{
	tele->telephone = (pTPhone)malloc(sizeof(TPhone)*MAX);
	tele->max = MAX;
	tele->size = 0;
}
void Insert(pTL tele)
{
	assert(tele);
	printf("��������:");
	scanf("%s", tele->telephone[tele->size].name);
	printf("�����Ա�:");
	scanf("%s", tele->telephone[tele->size].sex);
	printf("��������:");
	scanf("%d", &tele->telephone[tele->size].age);
	printf("����绰��:");
	scanf("%s", tele->telephone[tele->size].phone);
	printf("�����ַ:");
	scanf("%s", tele->telephone[tele->size].address);
	tele->size++;
	printf("��ӳɹ�\n");
}
void Remove(pTL tele)
{
	assert(tele);
	int i = 0;
	char name[20];
	printf("��������:");
	scanf("%s", name);
	for (i = 0; i < tele->size; i++)
	{
		if (strcmp(name, tele->telephone[i].name) == 0)
			break;
	}
	if (i == tele->size)
		printf("��ϵ�˲�����\n");
	else
	{
		while (i < tele->size)
		{
			tele->telephone[i] = tele->telephone[i + 1];
			i++;
		}
		tele->size--;
		printf("ɾ���ɹ�\n");
	}
}
void Find(pTL tele)
{
	assert(tele);
	char name[20];
	printf("��������:");
	scanf("%s", name);
	for (int i = 0; i < tele->size; i++)
	{
		if (strcmp(name, tele->telephone[i].name) == 0)
		{
			printf("����:%-5s�Ա�:%-5s����:%-5d�绰:%-15s��ַ:%-5s\n",
				tele->telephone[i].name, tele->telephone[i].sex, tele->telephone[i].age,
				tele->telephone[i].phone, tele->telephone[i].address);
			return;
		}
	}
	printf("��ϵ�˲�����\n");
}
void Revise(pTL tele)
{
	assert(tele);
	char name[20];
	printf("��������:");
	scanf("%s", name);
	for (int i = 0; i < tele->size; i++)
	{
		if (strcmp(name, tele->telephone[i].name) == 0)
		{
			int input = 0;
			printf("�޸�����:1�޸��Ա�:2�޸�����:3�޸ĵ绰:4�޸ĵ�ַ:5\n");
			printf("ѡ���޸�ѡ��:");
			scanf("%d", &input);
			switch (input)
			{
			case 1:{
					   printf("�޸�Ϊ:");
					   scanf("%s", tele->telephone[i].name);
			}
				break;
			case 2:{
					   printf("�޸�Ϊ:");
					   scanf("%s", tele->telephone[i].sex);
			}
				break;
			case 3:{
					   printf("�޸�Ϊ:");
					   scanf("%d", tele->telephone[i].age);
			}
				break;
			case 4:{
					   printf("�޸�Ϊ:");
					   scanf("%s", tele->telephone[i].phone);
			}
				break;
			case 5:{
					   printf("�޸�Ϊ:");
					   scanf("%s", tele->telephone[i].address);
			}
				break;
			default:printf("�޲���\n");
				break;
			}
			printf("�޸ĳɹ�\n");
			return;
		}
	}
	printf("��ϵ�˲�����\n");
}
void Destory(pTL tele)
{
	assert(tele);
	tele->size = 0;
}
void Print(pTL tele)
{
	assert(tele);
	for (int i = 0; i < tele->size; i++)
		printf("����:%-5s�Ա�:%-5s����:%-5d�绰:%-15s��ַ:%-5s\n",
		tele->telephone[i].name, tele->telephone[i].sex, tele->telephone[i].age, 
		tele->telephone[i].phone, tele->telephone[i].address);
}
void Order(pTL tele)
{
	assert(tele);
	int cur = tele->size;
	while (cur)
	{
		for (int i = 0; i + 1 < cur; i++)
		{
			if (strcmp(tele->telephone[i].name, tele->telephone[i + 1].name) > 0)
			{
				TL tmp;
				Init(&tmp);
				tmp.telephone[0] = tele->telephone[i + 1];
				tele->telephone[i + 1] = tele->telephone[i];
				tele->telephone[i] = tmp.telephone[0];
			}
		}
		--cur;
	}
}

void WriteFile(pTL tele)
{
	assert(tele);
	FILE *phone = fopen("telephone.txt", "w");
	fprintf(phone, "����--�Ա�--����--�绰--��ַ\n");
	for (int i = 0; i < tele->size; i++)
	{
		fprintf(phone, "%s--%s--%d--%s--%s\n",
			tele->telephone[i].name, tele->telephone[i].sex, tele->telephone[i].age,
			tele->telephone[i].phone, tele->telephone[i].address);
	}
	fclose(phone);
}