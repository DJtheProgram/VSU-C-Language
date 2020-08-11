/*
 * Program Name: Program2.c
 * Programmer: Dongwoon Jeong
 * Class: CS3335
 * HW:03
 * Problem:02
 */   
 
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define STACK_SIZE 100
#define STACK_UNDERFLOW 'e'

char contents[STACK_SIZE];
int top=0;

bool is_empty(){
   return top == 0;
}

bool is_full(){
   return top == STACK_SIZE;
}

void push(char c)
{
   if(is_full()){
      exit(0);
   }
   else{
      contents[top++] = c;
   }
}

char pop(){
   if(is_empty()){
      return STACK_UNDERFLOW;
   }
   else{
      return contents[--top];
   }
}

int main(){
   int i;
   bool b=true;
   char ch;
   char character[100];
    
   printf("Enter parentheses and/or braces:");
   scanf("%s",character);
   
   for(i=0;character[i]!='\0';i++){
      if(character[i]=='(' || character[i]=='{' || character[i]=='['){
         push(character[i]);}
      else if(character[i]==')'){
         ch = pop();
         if(ch!='(' || ch==STACK_UNDERFLOW){
            b=false;
         }
      }
      
      else if(character[i]=='}'){
         ch = pop();
         if(ch!='{' || ch==STACK_UNDERFLOW){
            b=false;
         }
      }
      
      else if(character[i]==']'){
         ch = pop();
         if(ch!='[' || ch==STACK_UNDERFLOW){
            b=false;
         }
      }
   
      if(b==false){
         printf("\nParentheses/braces are not nested properly");
         return 0;
      }
   }

   if(b==true && is_empty()){
      printf("\nParentheses/braces are nested properly");
   }
   
   else{
      printf("\nParentheses/braces are not nested properly");
   }

   return 0;
}
