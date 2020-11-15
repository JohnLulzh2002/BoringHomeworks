/*
函数fun的功能是对一个nxn的矩阵按顺时针旋转90度。删除下划线，请勿改动程序的结构,仅在指定位置
填入所编写的若干表达式或语句，不得增删语句。 例如： 
  经过变换后输出  
*/
#include<stdio.h>
#define N 50
/**********FILL**********/
void fun(int x[N][N],int n)
{
	int i,j;
/**********FILL**********/
	int y[N][N]; 
	for(i=0;i<n;i++)
	  for(j=0;j<n;j++)
/**********FILL**********/
	    y[i][j]=x[n-1-j][i];
	for(i=0;i<n;i++)
	  for(j=0;j<n;j++)
/**********FILL**********/
	    x[i][j]=y[i][j];
}
int main()
{
	int i,j,n=5;
	int a[N][N]={{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3},{4,4,4,4,4},{5,5,5,5,5}};
	printf("变换之前:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		  printf(" %d",a[i][j]);
		printf("\n");
	}
/**********FILL**********/
	fun(a,n);
	printf("变换之后:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		  printf(" %d",a[i][j]);
		printf("\n");
	}
	return 0;
}