#include "stdio.h"

int main(){
	int x ,y;
	printf("Enter 2 numbers");
	scanf("%d%d",&x,&y);
	x = y+x;
	y = x-y;
	x = x-y;
	printf("\nNum1:%d\nNum2:%d",x,y);
}
