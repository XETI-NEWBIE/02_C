#include<stdio.h>
void hi(void);
int input_num(int n);

int input_num(int n){
	int sum;
	printf("�Էµ� ���ڴ� %d�Դϴ���\n",n);
	sum=n+n;
	return sum;
    }
int main(void){
	int x, hap;
	hi();
	printf("���ڸ� �Է��ϼ�:");
	scanf("%d",&x);
	hap=input_num(x);
	hi();
return 0;
}
 
