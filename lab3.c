/*Dongwoon Jeong
 2019-06-26
 C programming lab3*/
 
#include <stdio.h>

void primeNum(int Num){
	int i,c=0;
	for(i =2; i <=Num/2; i++){
	if(Num%i == 0){
	for(i =2; i<Num; i++){
	if(Num%i == 0){
	printf("%d\n", i);
	c++;}}
	printf("\nnumber %d has %d divisors\n", Num, c);
	}
	break;	
	}
	if (Num%i != 0){
	printf("number %d has 0 divisors\n", Num);
	printf("This number is prime\n");
}}


	
void main(){
	int number;
	printf("Enter a number : ");
	scanf("%d", &number);
	primeNum(number);
}
	



