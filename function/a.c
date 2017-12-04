#include <stdio.h>
int isPrime(int);

int main(){
	int i=0;
	int sum=0;
	for(i=0;i<10;i++){
		if (isPrime(i)==0){
			sum=sum+i;
		}
	}
	printf("%d\n",sum);
	return 1;
}
int isPrime(int x){
	int flag=0;
	int i=0;
	for(i=2;i<x;i++){
		if(x%i==0){
			flag=1;
		}
	}
	return flag;
}