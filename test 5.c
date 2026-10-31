#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int v, i, r;
	
	printf("\\\\\\歡迎使用簡便電壓計算器///\n");
	printf("請輸入電流和歐姆: ");
	scanf("%d %d",&i,&r);
	
	v=i*r;
	
	printf("電壓為: %d",v);
	
	return 0;
}
