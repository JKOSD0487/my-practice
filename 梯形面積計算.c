#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
 {
 	//int s1, s2, h;
 	double area, s1, s2, h;
 	
 	printf("請輸入要計算的梯形上底、下底、高: ");
 	scanf("%lf %lf %lf",&s1, &s2, &h);
 	
 	area =(s1 + s2)* h / 2.0;
 	
 	printf("經計算後的答案為: %f",area);
 	
	return 0;
}
