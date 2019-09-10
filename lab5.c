/*Dongwoon Jeong
2019-07-09
CS3335
Lab5*/

#include <stdio.h>

int Minimum(int a, int b, int c){
   int min = a;
   if(b<min){
      min =b;}
   if(c<min){
      min = c;
   }
   return min;
}
int SumCube(int min){
   int sum=0, i;
   for(i=1; i<=min; i++){
      sum += i*i*i;
   }
   return sum;
}
   
int main(){
   int n1, n2, n3, min;
   printf("\n------------------------------------------\n");
   printf("Input three positive integer values: \n");
   scanf("%d %d %d", &n1, &n2, &n3);
   min = Minimum(n1, n2, n3);
   printf("The minimum of %d, %d and %d is %d.\n", n1, n2, n3, min);
   printf("The sum of the cubes from 1 to %d is %d.\n", min, SumCube(min));
   printf("------------------------------------------\n");
   return 0;
}