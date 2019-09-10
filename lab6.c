/*Dongwoon Jeong
2019-07-10
CS3335
Lab06
*/

#include <stdio.h>

int main(){
   int a[100];
   int n,i;
   int sum =0;
   int below =0;
   printf("type your numbers: ");
   scanf("%d" , &n);
   for(i=0; i<n; i++){
      scanf("%d", &a[i]);
      sum += a[i];
   }
   float avr = (float)sum/n;
   for(i =0; i<n; i++){
      if(avr >a[i]){
         below++;
      }
   }
   printf("\nTotal integers in the array: %d",n);
   printf("\nAverage of all array integers: %.4f", avr);
   printf("\nCount of grades below averages: %d\n", below);
   return 0;
}
