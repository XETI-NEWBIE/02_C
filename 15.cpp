#include<stdio.h>
main(){
	int i,n,m,sum;
	sum=0;
	puts("ù���� ���� :");
	scanf("%d",&n);
	for(i=n;i<=m;i++){
		if(i%2!=0)
		sum=sum+i;
	}
	printf("%d���� %d���� Ȧ���� �� : %d\n",n,m,sum);
}
