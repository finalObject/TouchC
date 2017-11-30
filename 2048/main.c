#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define Size 4
#define Init 3
void display(int a[Size][Size]){
	int i,j;
	for (i=0;i<Size;i++){
		for (j=0;j<Size;j++){
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}
}
void getPuzzle(int a[Size][Size]){
	srand(time(0));
    int i[Init],j,k,l,vera=1,locx,locy;
	for(j=0;j<Init;j++){
		if(j==0){
			k=rand()%(Size*Size);
			i[j]=k;
		}else{
			k=rand()%(Size*Size);
			for(l=j-1;l>=0;l--){
				if(k==i[l]){
					vera=0;
					break;
				}
			}
			if(vera==0){
				j-=1;
			}else{
				i[j]=k;	
			}
		}
		locx=(i[j])/4;
		locy=(i[j])%4;
		a[locx][locy]=2;
	}	
}
int up(int a[Size][Size]){
	srand(time(0));
	int i=0,j=0,cnt=0,ra=0,carol=1;
	for(i=0;i<Size;i++){
		for(j=0;j<Size;j++){
			int tem=j;
			if(a[tem][i]!=0){
            	while(tem>0&&(a[tem-1][i]==0||a[tem][i]==a[tem-1][i])){
            		carol=0;
	 				if(a[tem-1][i]==0){
	 					a[tem-1][i]=a[tem][i];
	 					a[tem][i]=0;
	 				    tem-=1;
					 }else{
					 	a[tem-1][i]*=2;
					 	cnt++;
					 	a[tem][i]=0;
	 				    tem-=1;
					 	break;
					 }
	 				
				}
			}else{
				cnt++;
			}
		}
	}
	if(carol==0){
		ra=rand()%cnt;
		cnt=0;
		for(i=0;i<Size;i++){
			for(j=0;j<Size;j++){
				if(a[i][j]==0){
				    
					if(cnt==ra){
						a[i][j]=2;
					}
					cnt++;
				}
			}
		}
	}
	
	int vera=1;
	display(a);
	return vera;
}
int down(int a[Size][Size]){
	srand(time(0));
	int i=0,j=0,cnt=0,ra=0,carol=1;
	for(i=0;i<Size;i++){
		for(j=Size-1;j>=0;j--){
			int tem=j;
			if(a[tem][i]!=0){
            	while(tem<Size-1&&(a[tem+1][i]==0||a[tem][i]==a[tem+1][i])){
            		carol=0;
	 				if(a[tem+1][i]==0){
	 					a[tem+1][i]=a[tem][i];
	 					a[tem][i]=0;
	 				    tem+=1;
					 }else{
					 	a[tem+1][i]*=2;
					 	cnt++;
					 	a[tem][i]=0;
	 				    tem+=1;
					 	break;
					 }
	 				
				}
			}else{
				cnt++;
			}
		}
	}
	if(carol==0){
		ra=rand()%cnt;
		cnt=0;
		for(i=0;i<Size;i++){
			for(j=0;j<Size;j++){
				if(a[i][j]==0){
				    
					if(cnt==ra){
						a[i][j]=2;
					}
					cnt++;
				}
			}
		}
	}

	
	int vera=1;
	display(a);
	return vera;
}
int left(int a[Size][Size]){
	srand(time(0));
	int i=0,j=0,cnt=0,ra=0,carol=1;
	for(i=0;i<Size;i++){
		for(j=0;j<Size;j++){
			int tem=j;
			if(a[i][tem]!=0){
            	while(tem>0&&(a[i][tem-1]==0||a[i][tem]==a[i][tem-1])){
            		carol=0;
	 				if(a[i][tem-1]==0){
	 					a[i][tem-1]=a[i][tem];
	 					a[i][tem]=0;
	 				    tem-=1;
					 }else{
					 	a[i][tem-1]*=2;
					 	cnt++;
					 	a[i][tem]=0;
	 				    tem-=1;
					 	break;
					 }
	 				
				}
			}else{
				cnt++;
			}
		}
	}
	if(carol==0){
		ra=rand()%cnt;
		cnt=0;
		for(i=0;i<Size;i++){
			for(j=0;j<Size;j++){
				if(a[i][j]==0){
				    
					if(cnt==ra){
						a[i][j]=2;
					}
					cnt++;
				}
			}
		}
	}
	
	int vera=1;
	display(a);
	return vera;
}
int right(int a[Size][Size]){
	srand(time(0));
	int i=0,j=0,cnt=0,ra=0,carol=1;
	for(i=0;i<Size;i++){
		for(j=Size-1;j>=0;j--){
			int tem=j;
			if(a[i][tem]!=0){
            	while(tem<Size-1&&(a[i][tem+1]==0||a[i][tem]==a[i][tem+1])){
            		carol=0;
	 				if(a[i][tem+1]==0){
	 					a[i][tem+1]=a[i][tem];
	 					a[i][tem]=0;
	 				    tem+=1;
					 }else{
					 	a[i][tem+1]*=2;
					 	cnt++;
					 	a[i][tem]=0;
	 				    tem+=1;
					 	break;
					 }
	 				
				}
			}else{
				cnt++;
			}
		}
	}
	if(carol==0){
		ra=rand()%cnt;
		cnt=0;
		for(i=0;i<Size;i++){
			for(j=0;j<Size;j++){
				if(a[i][j]==0){
				   
					if(cnt==ra){
						a[i][j]=2;
					}
					cnt++;
				}
			}
		}
	}

	
	int vera=1;
	display(a);
	return vera;

}
//判断游戏，0为继续，1为胜利，-1为失败 
int check(int a[Size][Size]){
	int vera=0,i,j,carol=1;
	for(i=0;i<Size;i++){
		for(j=0;j<Size;j++){
			if(a[i][j]==2048)return 1;
		}
	}
	for(i=0;i<Size;i++){
		for(j=0;j<Size;j++){
			//当出现可行解时，carol赋值为0，结束检查 
			if(i==Size-1&&j==Size-1){
				if(a[i][j]==0){carol=0;break;
				}
			}else if(i==Size-1){
            	if(a[i][j]==a[i][j+1]||a[i][j]==0){carol=0;break;
				}
			}else if(j==Size-1){
				if(a[i][j]==a[i+1][j]||a[i][j]==0){carol=0;break;
				}
			}else{
				if(a[i][j]==a[i][j+1]||a[i][j]==a[i+1][j]||a[i][j]==0){
					carol=0;break;
				}
			}
		}
		if(carol==1&&i==Size-1&&j==Size){
			vera=-1;
		}
		if(carol==0)break;
		if(vera!=0)break;
	}
	return vera;
}
int main(){
	int game[Size][Size]={0},vera=1;
	getPuzzle(game);
	display(game);
	char inst;
	while(inst=getchar()){
		if(inst=='0'){printf("Game Over\n");break;
		}else if(inst!='w'&&inst!='s'&&inst!='a'&&inst!='d'){continue;
		}
		switch(inst){
			case 'w':vera=up(game);break;
			case 's':vera=down(game);break;
			case 'a':vera=left(game);break;
			case 'd':vera=right(game);break;
		}
		vera=0;
		vera=check(game);
		if(vera==-1){
			printf("Game over\n");
			break;
		}else if(vera==1){
			printf("Win!\n");
			break;
		}	    	
	}
	return 0;
}
