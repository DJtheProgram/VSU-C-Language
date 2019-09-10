/*Dongwoon Jeong
2019-07-02
CS3335 
Lab4*/

#include <stdio.h>

int main(void){
int i, j, n;

	for (i=1; i<=5; i++){
	for(j=5; j>=i; j--){
	if(i==j){}
	else{
	printf(".");}
	}for (n=1; n<=i; n++){
	printf("%d",i);}
	printf("\n");}
	printf("\n");

	for(i=1; i<=5; i++){
	for(j=5; j>=1; j--){
	if(i==j){
	printf("%d",i);}
	else{
	printf(".");
	}
	}printf("\n");}
	return 0;
}

	
  
