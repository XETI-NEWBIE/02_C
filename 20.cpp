#include<stdio.h>
void hi(void); 
void input_num(int n);

void input_num(int n){
	printf("�Էµ� ���ڴ� %d ��.\n",n);
	printf("�Էµ� ���ڸ� �� �� ���ϸ� %d�Դϴ�\n",n+n);
}

int main(void){
	int x;
	hi();
	printf("���ڸ� �Է��ϼ� :");
	scanf("%d",&x);
	input_num(x);
	hi();
	input_num(10);
return 0;
}

void hi(void){
	printf("�ȳ��ϼ���. ����λ��Դϴ�.\n");
}
