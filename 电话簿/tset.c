#include "telephine.h"

void test()
{
	printf("**************************************************************\n");
	printf("**********                 �绰��                   **********\n");
	printf("**********1.�����ϵ����Ϣ      2.ɾ��ָ����ϵ����Ϣ**********\n");
	printf("**********3.����ָ����ϵ����Ϣ  4.�޸�ָ����ϵ����Ϣ**********\n");
	printf("**********5.��ʾ������ϵ����Ϣ  6.���������ϵ��    **********\n");
	printf("**********7.����������������ϵ��0.�˳�              **********\n");
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
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:printf("�˳�����\n");
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
		default:printf("�������\n");
			break;
		}
	} while (input);
	WriteFile(&tele);
	return 0;
}