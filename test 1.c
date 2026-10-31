#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int summer=800,winter=1200,a,b,total;
	printf("一件夏季制服是800元，一件冬季制服是1200元\n");
	printf("請輸入要購買的數量(中間要空格): ");
	scanf("%d %d",&a,&b);
	total = (summer*a)+(winter*b);
	printf("總金額為: %d",total);
	
	
	
	
	
	return 0;
}
