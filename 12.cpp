#include<stdio.h>
main(){
	char x[5];
	int more;
	do{
	puts("�ش��ϴ� �׸��� �Է��Ͻÿ�");
	puts("a:�Ա�, b:���, c:�۱�, d:��ȸ");
	scanf("%s",&x);
	switch(x){
		case 'a' :
		    puts("�Ա� ����");break;
		case 'b':
		    puts("��� ����");break; 
		case 'c':
		    puts("�۱� ����");break; 
		case 'd':
		    puts("��ȸ ����");break;    
		default:
			puts("���� �޴��� ����");break;	
		}
		puts("����Ϸ��� [1], ������ [2]");
		scanf("&d",&more);
 
}while(more==1);

}
