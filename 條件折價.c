#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	int x = 45, y, total;
	
	printf("由於今天是你的慶生會，所以你決定請大家喝飲料\n");
	printf("請輸入要購買幾瓶飲料，一瓶45元: ");
	scanf("%d",&y);
	
	total = x * y;
	
	if (total >= 500)
		{
		printf("提醒您，滿500折100\n");
		printf("目前您購買的數量將總起來已達折扣標準\n");
		printf("已為您自動扣除");
		printf("折價後的金額是 %d 元",total - 100);
		}
	
	else {printf("您好 這邊一共是 %d 元",total);	}
	
	return 0;
}
