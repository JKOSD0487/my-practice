#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int x, y, a, b;
	
	printf("你心情很好決定請每位同學吃炸雞...\n");
	printf("你打算買幾隻?這個班有幾個人: ");
	scanf("%d %d",&x,&y);
	
	a=x / y;
	b=x % y;
	
	printf("你總共買了 %d 隻,而每位同學分到 %d 隻炸雞,剩 %d 隻", x, a, b);
	
	return 0;
}
