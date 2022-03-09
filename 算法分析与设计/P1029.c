#include<stdio.h>
int map[101][101],c,r,i=0,j=0,head,end,ans=0;
short start=0,max[101][101],queue[20000][2];
void next(int x,int y){
	head++;
	if(x && map[x-1][y]<map[x][y] && max[x-1][y]<=max[x][y]){
		queue[end][0]=x-1;
		queue[end++][1]=y;
		max[x-1][y]=max[x][y]+1;
	}
	if(x-c && map[x+1][y]<map[x][y] && max[x+1][y]<=max[x][y]){
		queue[end][0]=x+1;
		queue[end++][1]=y;
		max[x+1][y]=max[x][y]+1;
	}
	if(y && map[x][y-1]<map[x][y] && max[x][y-1]<=max[x][y]){
		queue[end][0]=x;
		queue[end++][1]=y-1;
		max[x][y-1]=max[x][y]+1;
	}
	if(y-r && map[x][y+1]<map[x][y] && max[x][y+1]<=max[x][y]){
		queue[end][0]=x;
		queue[end++][1]=y+1;
		max[x][y+1]=max[x][y]+1;
	}
}
int main(){
	scanf("%d%d",&r,&c);
	for(;i<r;i++)for(j=0;j<c;j++)
		scanf("%d",&map[i][j]);
	for(;start<c*r;start++){
		head=end=0;
		for(i=0;i<r;i++)for(j=0;j<c;j++)
			max[i][j]=1;
		next(start/c,start%c);
		while(head<end)
			next(queue[head][0],queue[head][1]);
		for(i=0;i<r;i++)for(j=0;j<c;j++)
			if(max[i][j]>ans)
				ans=max[i][j];
	}
	printf("%d",ans);
	return 0;
}
