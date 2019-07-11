#include <stdio.h>
void RotateFourChars(char* input);

int main(void){
	char alpha[4];
   printf("Type 4 alphabet: \n");
   scahf("%s", alpha);
   RotateFourChars(alpha);
   return 0;
}

void RotateFourChars(char *input){
	char temp;
   int i,j;
   for(i=0; i<4; i++){
   printf("%s\n",input);
   temp=input[0]
   for(j=0;j<3;j++){
   input[j]=input[j+1];
   }
   input[j]=temp;   
	}
}
