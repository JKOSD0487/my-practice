#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
 {
 	int code, isValid;
 	printf("½Ð¿é¤J±K½X: ");
 	scanf("%d",&code);
 	
 	isValid = code % 2;
 	
 	printf("%d",(code > 50) && (isValid == 0));
 	
 	
 	
	return 0;
}
