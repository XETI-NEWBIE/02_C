#include<stdio.h>
main(){
	int i,n,m,cnt;
	cnt=0;
	puts("ù��° ���� :");
	scanf("%d",&n);
	puts("������ ���� :");
	scanf("%d",&m); 
	for(i=n;i<=m;i++){
		if(i%2==0)
		cnt=cnt+1;
	}
	printf("%d���� %d���� 2�� ����� ���� : %d\n",n,m,cnt);
}
