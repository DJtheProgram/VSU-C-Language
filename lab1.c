/* 2019-06-19
 * Dongwoon-Jeong
 * CS3335 Lab1*/
#include <stdio.h>
int main()
{
float firstNum = 0 , common = 0 , numOfterms = 0, LastTerm , Sum , Average;
printf("--------------------------\n");
printf(" Enter first term:");
scanf("%lf" , &firstNum);
printf("\n Enter commom difference:");
scanf("%lf" , &common);
printf("\n Enter number of terms:");
scanf("%lf" , &numOfterms);
LastTerm = firstNum + (numOfterms - 1) * common;
printf("\n\n The last term is %.lf" , LastTerm);
Sum = numOfterms * ( firstNum + LastTerm) /2;
printf("\n The sum of all terms is %.lf" , Sum );
Average = (Sum) / numOfterms;
printf("\n The Average of all the terms is %.2f" , Average);
printf("--------------------------\n");
return 0;
}
