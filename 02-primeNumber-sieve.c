/*
	Program to to calculate prime numbers using sieve method(faster and efficient anta), outputs the prime numbers between lower limit(a) and upper limit(b). 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	long int i,j;
	long int a,b;
	scanf("%ld%ld",&a,&b);
	int *primes=(int *)malloc(sizeof(int) * b);
	memset(primes,1,sizeof(int)*b);
	for(i=2;i<b;i++){
		if(primes[i]){
			for(j=i;(i*j)<b;j++)
				primes[i*j]=0;
		}
	}
	printf("\n Prime numbers between %ld and %ld are:\n",a,b);
	for(i=a;i<b;i++){
		if(primes[i])
			printf("%ld ",i);
	}
	printf("\n");
	return 0;
}
