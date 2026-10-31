#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int l, w, area, perimeter;
	printf("歡迎使用面積與周長計算器\n");
	printf("請輸入長、寬: ");
	scanf("%d %d",&l,&w);
	
	area = l*w;
	perimeter = (l+w)*2;
	
	printf("面積為: %d,周長為: %d",area,perimeter);
	
	return 0;
}
