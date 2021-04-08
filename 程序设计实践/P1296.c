#include<stdio.h>
char a[777][777];
const int exp3[]={0,1,3,9,27,81,243,729};
void fill(int x,int y,int size,int space){
	int i,j;
	if(space){
		for(i=0;i<exp3[size];i++)
			for(j=0;j<exp3[size];j++)
				a[x+i][y+j]=' ';
		return;
	}
	if(size==1){
		a[x][y]='X';
		return;
	}
	fill(x,y,size-1,0);
	fill(x,y+exp3[size-1],size-1,1);
	fill(x,y+2*exp3[size-1],size-1,0);
	fill(x+exp3[size-1],y,size-1,1);
	fill(x+exp3[size-1],y+exp3[size-1],size-1,0);
	fill(x+exp3[size-1],y+2*exp3[size-1],size-1,1);
	fill(x+2*exp3[size-1],y,size-1,0);
	fill(x+2*exp3[size-1],y+exp3[size-1],size-1,1);
	fill(x+2*exp3[size-1],y+2*exp3[size-1],size-1,0);
}
int main(){
	int n;
	while(~scanf("%d",&n)){
		fill(0,0,n,0);
		int i,j;
		for(i=0;i<exp3[n];i++){
			for(j=0;j<exp3[n];j++)
				printf("%c",a[i][j]);
			printf("\n");
		}
		printf("-\n");
	}
	return 0;
}