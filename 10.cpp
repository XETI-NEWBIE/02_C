#include<stdio.h>
main(){
	int menu;
	do{
	printf("\n");
	printf("�޴��� �����ϼ���\n\n");
	printf("*****�޴���*****\n\n");
	printf("1.¥���\n");
	printf("2.«��\n");
	printf("3.������\n");
	printf("4.������\n");
	scanf("%d",&menu);
    }while(menu<1||menu>4);
	printf("�޴�[%d]��(��) �����߽��ϴ�.\n\n",menu);
	switch(menu){
	    case 1:
	      	puts("¥����� ����, 8000���Դϴ�");break; 
	    case 2:
	      	puts("«���� ����, 9000���Դϴ�");break;
	    case 3:
	      	puts("�������� ����, 9000���Դϴ�");break; 
	    case 4:
	      	puts("�������� ����, 15000���Դϴ�");break; 
        }
}
	
