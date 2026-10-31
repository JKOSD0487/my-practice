#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	int hour, money = 190,total;
	
	printf("嗨~打工人，你這個月工作了幾小時: ");
	scanf("%d",&hour);
	
	total = hour*money;
	
	printf("你這個月靠打工賺了: %d 塊",total);
	
	
	return 0;
}
