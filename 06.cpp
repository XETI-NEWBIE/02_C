#include<stdio.h>
main(){
	int num1,num2,sum;
	printf("�� ���� �Է��Ͻÿ�");
	scanf("%d%d",&num1,&num2); 
	printf("�� ���� ��:[%d] \n",num1+num2);
	printf("�� ���� ��:[%d] \n",num1-num2);
	printf("�� ���� ��:[%d] \n",num1*num2);
	printf("�� ���� ���:[%f] \n",((float)num1+(float)num2)/2);
	printf("�� �� ������ �� : [%d]\n",num1/num2);
	printf("�� �� ������ ������:[%d]",num1%num2);
}
