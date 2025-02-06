#include <stdio.h>

int main()
{
	int price = 0;
	
	printf("请输入商品价值(元)：");
	scanf("%d",&price);
	
	int paid = 0;
	
	printf("请输入您的支付金额（元）：");
	scanf("%d",&paid); 
	
	int change = paid - price;
	printf("应该找零的金额（元）：%d\n",change);
	
	return 0;
}
