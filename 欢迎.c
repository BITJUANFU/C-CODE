#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int wyxd(int x)
{
	switch (x)
	{
	case 1:
		printf("��ɽ��ӭ��");
		break;
	case 2:
		printf("̩ɽ��ӭ��");
		break;
	case 3:
		printf("��ɽ��ӭ��");
		break;
	case 4:
		printf("��ɽ��ӭ��");
		break;
	case 5:
		printf("��ɽ��ӭ��");
		break;


	}
}
main()
{
	int x;
	printf("imput a number(1-5):");
	scanf("%d", &x);
	wyxd(x);
}