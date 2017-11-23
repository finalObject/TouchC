#include <stdio.h>
int main(){
	//生成0-9的随机证书
	int a1=rand()%10;
	int a2=rand()%10;
	int a3=rand()%10;
	int a4=rand()%10;
	int a5=rand()%10;
	int count = 0;
	printf("numbers:%d,%d,%d,%d,%d\n",a1,a2,a3,a4,a5);
	if(a1>5){
		count=count+1;
	}
	if(a2>5){
		count=count+1;
	}
	if(a3>5){
		count=count+1;
	}
	if(a4>5){
		count=count+1;
	}
	if(a5>5){
		count=count+1;
	}
	printf("bigger than 5:%d\n",count);
	return 0;


}