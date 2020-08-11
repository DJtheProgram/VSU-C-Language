/*
 * Program Name: hw4.c
 * Programmer: Dongwoon Jeong
 * Class: CS3335
 * HW: 04
 * */
 
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void setComputerBoard(char *);
int intplayGame(char *, char *);
void setBoard(char *);
void printBorad(char *);
int getRandomNumber();
int main()
{
   char hBoard[10];//declear size of the board
   char cBoard[10];//declear size of the board
   int result;
   srand(time(0));
   setBoard(hBoard);//set up the board
   setComputerBoard(cBoard);//set up the board
   result=intplayGame(hBoard, cBoard);
   if(result==1)
      printf("\nHuman Wins\n");
   else
      printf("\nComputer Wins\n");
   return 1;
}
void setBoard(char *board)
{
   char *p;
   int i=0,fp,sp;
   p=board;
   for (i = 0; i<10; i++)
   {
      *(p+i)='*';
   }
   printf("Enter 1st position: ");
   scanf("%d",&fp);
   printf("Enter 2nd position: ");
   scanf("%d",&sp);
   *(p+fp)='S';
   *(p+sp)='S';
}
void setComputerBoard(char *board)
{
   char *p;
   int i=0,fp,sp;
   p=board;
   for (i = 0; i<10; i++)
   {
      *(p+i)='*';
   }
   fp = (rand() % (8 - 0 + 1)) + 0;//generate random position
   sp=fp+1;//generate random position
   *(p+fp)='S';
   *(p+sp)='S';
}
int intplayGame(char *hBoard, char * cBoard)
{
   int cHit=0,hHit=0;
   int cGuess,hGuess;
   int i,j;
   do
   {
      cGuess=getRandomNumber();//Computer guess random position
      printf("\nComputer guesses %d",cGuess);
      if(*(hBoard+cGuess)=='S')// if computer guess the position print hit
      {
         printf("\nHIT!");
         *(hBoard+cGuess)='H';
         cHit++;
      }
      else
      {
         printf("\nMISS!");
         *(hBoard+cGuess)='M';//if not print miss.
      }
      printf("\nHuman Board:");//print board.
      printBorad(hBoard);
      printf("Computer Board:");
      printBorad(cBoard);
      fflush(stdin);
      printf("\nEnter guess: ");
      scanf("%d",&hGuess);
      if(*(cBoard+hGuess)=='S')//if user guess position print hit.
      {
         printf("\nHIT!");
         *(cBoard+hGuess)='H';
         hHit++;
      }
      else
      {
         printf("\nMISS!");//if not print miss.
         *(cBoard+hGuess)='M';
      }
      printf("\nHuman Board:");
      printBorad(hBoard);
      printf("Computer Board:");
      printBorad(cBoard);
   }while(cHit!=2 && hHit!=2);
   if(hHit==2)
      return 1;
   else
      return 0;
}
void printBorad(char *board)//board printing method.
{
   int i=0;
   printf("\n");
   for (i = 0; i<10; i++)
   {
      printf("%d ",i);
   }  
   printf("\n");
   for (i = 0; i<10; i++)
   {
      printf("%c ",*(board+i));
   }
   printf("\n");
}
int getRandomNumber()//generate random number.
{
   return ((rand() % (9 - 0 + 1)) + 0);
}