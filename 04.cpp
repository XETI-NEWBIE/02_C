#include<stdio.h>
main()
{
	char mw;
	char name[10];
	int age;
	puts("����(��:m,��:w)");
	scanf("%c",&mw);
	puts("�̸�:");
	scanf("%s",&name);
	puts("����");
	scanf("%d",&age); 
	printf("����� �̸�:%s, ����:%c, ����:%d",name,mw,age);
}


