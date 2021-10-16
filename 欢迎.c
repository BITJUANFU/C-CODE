#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int wyxd(int x)
{
	switch (x)
	{
	case 1:
		printf("»ªÉ½»¶Ó­Äú");
		break;
	case 2:
		printf("Ì©É½»¶Ó­Äã");
		break;
	case 3:
		printf("ºâÉ½»¶Ó­Äã");
		break;
	case 4:
		printf("ºãÉ½»¶Ó­Äã");
		break;
	case 5:
		printf("áÔÉ½»¶Ó­Äã");
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