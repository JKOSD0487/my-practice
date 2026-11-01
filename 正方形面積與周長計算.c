#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int l, area, perimeter;
 	
 	printf("請輸入邊長: ");
 	scanf("%d",&l);
 	
 	area = l*l;
 	perimeter = l*4;
 	
 	printf("此正方形的面積為: %d ,周長為: %d",area, perimeter);
 	

	return 0;
}
