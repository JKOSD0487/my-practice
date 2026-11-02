#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int s1, s2, s3, total, alltotal;
	
	printf("請輸入國文、英文、數學成績: ");
	scanf("%d %d %d",&s1, &s2, &s3);
	
	alltotal = (s1 + s2 + s3)/3;
	total = s1 + s2 + s3;
	
	printf("總分為: %d 平均為 %d",total, alltotal);
	
	
	
	return 0;
}
