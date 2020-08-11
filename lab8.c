/*Dongwoon Jeong
 * 2019/07/16
 * lab08
 * CS3335
 */
#include <stdio.h>
int gcd(int m, int n){
	if(n ==0){
	return m;
	}
	else if(m >= n && n>0){
		return gcd(n, (m%n));
	}
	}

int main(void){
	int a, b, gcdNum;
	printf("\n Type two numbers want to find GCD: ");
	scanf("%d%d", &a, &b);
	gcdNum = gcd(a, b);
	if(gcd)
	printf("\nGCD of %d and %d is %d. ", b,a,gcdNum);
	else
	printf("\ncannot process program. no divisor");
	return 0;
	}

