#include<stdio.h>
int main(){
	int n;
	const int dx[]={1,0,0,-1},dy[]={0,-1,1,0};
	while(~scanf("%d",&n)){
		int x=0,y=1,a[555][555]={1},c=2,dir=0;
		while(x<n&&y<n){
			a[x][y]=c++;
			x+=dx[dir];y+=dy[dir];
			if(x<0||y<0)
				x++,y++,dir++;
			if(x==y)
				dir++;
			if(dir==4)dir=0;
		}
		for(x=0;x<n;x++){
			printf("%d",a[x][0]);
			for(y=1;y<n;y++)
				printf(" %d",a[x][y]);
			printf("\n");
		}
	}
	return 0;
}