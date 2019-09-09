/*2019/06/25
Dongwoon Jeong
C programming lab2
Fibonacci*/


#include <stdio.h>

int main(void){
	int i, typeInt, fiboNum, firstNum =1, secondNum=1;

	printf("Enter an Integer: ");
	scanf("%d", &typeInt); 
	for(i=1; i <= typeInt -2; i++)
	{
	fiboNum = firstNum + secondNum;
	firstNum = secondNum;
	secondNum = fiboNum;
	}
	printf("\n The Fibonacci value for %d is %d", typeInt, fiboNum);
	return 0;
	}		
