/*下面程序是实现MXN矩阵的转置(将矩阵的行列互换)，如输入：
1 2 3 4
5 6 7 8
9 10 11 12
输出：
1 5 9
2 6 10
3 7 11
4 8 12
请完善程序。注意:请勿改动函数中的任何内容,仅在指定处的横线上填入所编写的若干表达式或语句。 试题程序: */
#include<stdio.h>
#define M 3
#define N 4
void fun(int x[][N],int y[][M]);
int main()
{
/**********FILL**********/
	int i,j,a[M][N],b[M][N]   ;
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);
/**********FILL**********/
	fun( a,b );
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			printf("%4d",b[i][j]);
		printf("\n");
	}
	return 0;
}
void fun(int x[][N],int y[][M])
{
	int i,j;
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
           {
/**********FILL**********/
			 y[i][j]=x[i][j] ;
            }
}
