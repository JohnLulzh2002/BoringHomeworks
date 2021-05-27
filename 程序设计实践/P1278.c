#include<stdio.h>
int main(){
	int n,m[122][122],c,x,y,dir;
	const int dx[]={1,-1};
	while(~scanf("%d",&n)){
		x=y=dir=c=0;
		while(y<n){
			c++;
			m[x][y]=c;
			x+=dx[dir];
			if(x==n){
				x--;
				y++;
				dir=1-dir;
			}
			if(x==-1){
				x++;
				y++;
				dir=1-dir;
			}
		}
		for(x=0;x<n;x++){
			for(y=0;y<n;y++)
				printf("%d ",m[x][y]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}