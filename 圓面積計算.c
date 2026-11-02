#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	float pi = 3.14, r, area;
 	
 	printf("請輸入半徑: ");
 	scanf("%f",&r);
 	
 	area = r*r*pi;
 	
 	printf("圓面積為: %f",area);
 	
 	
 	
 	
	return 0;
}
