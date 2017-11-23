#include <stdio.h>
int main(){
	int A=0;int B=0;int C=0;int D=0;int F=0;
	int score=0;
	int cnt=0;
	while(1){
		scanf("%d",&score);
		if (score<=59){
			F=F+1;
		}else if(score<=69){
			D=D+1;
		}else if(score<=79){
			C=C+1;
		}else if(score<=89){
			B=B+1;
		}else{
			A=A+1;
		}
		cnt=cnt+1;
	}
	printf("A=%d,B=%d,C=%d,D=%d,F=%d\n",A,B,C,D,F);
	return 0;
}