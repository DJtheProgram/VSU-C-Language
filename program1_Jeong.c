/*
Program Name: Program1.c
Programmer: Dongwoon Jeong
Class: CS3335
HW:03
Problem:01
*/
#include <stdio.h>


int main(){
   char ch, character[100];
   int i, key;

	printf("Enter message to be encrypted: ");
	scanf("%[^\n]s",&character);//recieving character
	printf("Enter shift amount (1 - 25): ");
	scanf("%i", &key);//recieving shift amount

	for(i=0; character[i] != '\0'; i++){//algorithm
	ch = character[i];
	if(ch >='a' && ch <= 'z'){
	   ch =((ch - 'a') + key)%26 +'a';
	character[i]=ch;}
	if(ch >='A'&&  ch<='Z'){
	ch =((ch - 'A') + key)%26 + 'A';
	character[i]=ch;
	}
     	}
	printf("Encrypted message: %s", character,  "\n" );//printing result
	return 0;
	}
