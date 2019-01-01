#include "telephine.h"

void test()
{
	printf("**************************************************************\n");
	printf("**********                 电话簿                   **********\n");
	printf("**********1.添加联系人信息      2.删除指定联系人信息**********\n");
	printf("**********3.查找指定联系人信息  4.修改指定联系人信息**********\n");
	printf("**********5.显示所有联系人信息  6.清空所有联系人    **********\n");
	printf("**********7.以名字排序所有联系人0.退出              **********\n");
	printf("**************************************************************\n");
	printf("**************************************************************\n");
}

int main()
{
	int input = 0;
	TL tele;
	Init(&tele);
	do
	{
		test();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:printf("退出操作\n");
			break;
		case 1:Insert(&tele);
			break;
		case 2:Remove(&tele);
			break;
		case 3:Find(&tele);
			break;
		case 4:Revise(&tele);
			break;
		case 5:Print(&tele);
			break;
		case 6:Destory(&tele);
			break;
		case 7:Order(&tele);
			break;
		default:printf("错误操作\n");
			break;
		}
	} while (input);
	WriteFile(&tele);
	return 0;
}