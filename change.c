#include <stdio.h>

int main()
{
	int price = 0;
	
	printf("��������Ʒ��ֵ(Ԫ)��");
	scanf("%d",&price);
	
	int paid = 0;
	
	printf("����������֧����Ԫ����");
	scanf("%d",&paid); 
	
	int change = paid - price;
	printf("Ӧ������Ľ�Ԫ����%d\n",change);
	
	return 0;
}
