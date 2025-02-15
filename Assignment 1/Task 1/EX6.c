#include "stdio.h"

void swap(float *x,float *y){
	float temp;
	temp = *y;
	*y = *x;
	*x = temp;
}

int main(){
	float x , y;
	printf("Enter");
	scanf("%f%f",x,y);
	swap(&x,&y);
	printf("\n Num1:%f\nNum2:%f",x,y);
}

