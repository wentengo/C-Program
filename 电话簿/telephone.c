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
	printf("输入姓名:");
	scanf("%s", tele->telephone[tele->size].name);
	printf("输入性别:");
	scanf("%s", tele->telephone[tele->size].sex);
	printf("输入年龄:");
	scanf("%d", &tele->telephone[tele->size].age);
	printf("输入电话号:");
	scanf("%s", tele->telephone[tele->size].phone);
	printf("输入地址:");
	scanf("%s", tele->telephone[tele->size].address);
	tele->size++;
	printf("添加成功\n");
}
void Remove(pTL tele)
{
	assert(tele);
	int i = 0;
	char name[20];
	printf("输入姓名:");
	scanf("%s", name);
	for (i = 0; i < tele->size; i++)
	{
		if (strcmp(name, tele->telephone[i].name) == 0)
			break;
	}
	if (i == tele->size)
		printf("联系人不存在\n");
	else
	{
		while (i < tele->size)
		{
			tele->telephone[i] = tele->telephone[i + 1];
			i++;
		}
		tele->size--;
		printf("删除成功\n");
	}
}
void Find(pTL tele)
{
	assert(tele);
	char name[20];
	printf("输入姓名:");
	scanf("%s", name);
	for (int i = 0; i < tele->size; i++)
	{
		if (strcmp(name, tele->telephone[i].name) == 0)
		{
			printf("姓名:%-5s性别:%-5s年龄:%-5d电话:%-15s地址:%-5s\n",
				tele->telephone[i].name, tele->telephone[i].sex, tele->telephone[i].age,
				tele->telephone[i].phone, tele->telephone[i].address);
			return;
		}
	}
	printf("联系人不存在\n");
}
void Revise(pTL tele)
{
	assert(tele);
	char name[20];
	printf("输入姓名:");
	scanf("%s", name);
	for (int i = 0; i < tele->size; i++)
	{
		if (strcmp(name, tele->telephone[i].name) == 0)
		{
			int input = 0;
			printf("修改姓名:1修改性别:2修改年龄:3修改电话:4修改地址:5\n");
			printf("选择修改选项:");
			scanf("%d", &input);
			switch (input)
			{
			case 1:{
					   printf("修改为:");
					   scanf("%s", tele->telephone[i].name);
			}
				break;
			case 2:{
					   printf("修改为:");
					   scanf("%s", tele->telephone[i].sex);
			}
				break;
			case 3:{
					   printf("修改为:");
					   scanf("%d", tele->telephone[i].age);
			}
				break;
			case 4:{
					   printf("修改为:");
					   scanf("%s", tele->telephone[i].phone);
			}
				break;
			case 5:{
					   printf("修改为:");
					   scanf("%s", tele->telephone[i].address);
			}
				break;
			default:printf("无操作\n");
				break;
			}
			printf("修改成功\n");
			return;
		}
	}
	printf("联系人不存在\n");
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
		printf("姓名:%-5s性别:%-5s年龄:%-5d电话:%-15s地址:%-5s\n",
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
	fprintf(phone, "姓名--性别--年龄--电话--地址\n");
	for (int i = 0; i < tele->size; i++)
	{
		fprintf(phone, "%s--%s--%d--%s--%s\n",
			tele->telephone[i].name, tele->telephone[i].sex, tele->telephone[i].age,
			tele->telephone[i].phone, tele->telephone[i].address);
	}
	fclose(phone);
}