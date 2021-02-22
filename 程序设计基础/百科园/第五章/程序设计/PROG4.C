/*请编一个函数void fun(int tt[M][N], int pp[N]), tt指向一个M行N列的二维数组,求出二维数组每列中最大元素,
并依次放入pp所指的一维数组中。二维数组中的数已在主函数中给出。 注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号的注释语句中填入所编写的若干语句。 试题程序: */
#include<stdio.h>
#define M 3
#define N 4
void  fun(int tt[M][N],int pp[N])
{
/************Begin**************/
	int i,j;
	for(i=0;i<N;i++){
		pp[i]=0;
		for(j=0;j<M;j++)
			if(tt[j][i]>pp[i])
				pp[i]=tt[j][i];
	}
/************End**************/
}
int main()
{
 FILE *wf,*in;
 int t[M][N]={{68, 32, 54, 12},{14, 24, 88, 58},{42, 22, 44, 56}};
 int p[N],i,j,k;
 printf("The riginal data is:\n");
 for(i=0;i<M;i++)
   {
    for(j=0;j<N;j++)
        printf("%6d",t[i][j]);
    printf("\n");
   }
 fun(t,p);
 printf("\nThe result  is:\n");
 for(k=0;k<N;k++)
   printf("%4d",p[k]);
 printf("\n");
/******************************/
  in=fopen("in44.dat","r");
  wf=fopen("out44.dat","w");
  for(i=0;i<M;i++)
	  for(j=0;j<N;j++)
		  fscanf(in,"%d",&t[i][j]);
  fun(t,p);
  for(k=0;k<N;k++)
    fprintf(wf,"%4d",p[k]);
  fclose(wf);
  fclose(in);
/*****************************/
return 0;
}
