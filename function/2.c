#include <stdio.h>
int add(int x){
	x=x+1;
	return x;
}
int main(){
	int a=2;
	int result=add(a);
	printf("%d\n", result);
	return 0;
}