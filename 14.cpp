#include<stdio.h>
main(){
	int i,n;
	char name[10];
	printf("�ݺ��ϰ� ���� ����?"); 
	scanf("%s",&name);
	printf("�� �� �ݺ��ұ���?");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		printf("%s \n", name);
	}
	printf("\n %s�� %dȸ �ݺ�", name, n);
}
