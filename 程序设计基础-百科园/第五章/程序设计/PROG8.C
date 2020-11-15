/*请编写函数fun,函数的功能是:求出二维数组周边元素之和,作为函数值返回。二维数组中的值在主函数中赋予。 
例如,若二维数组中的值为 
    1  3  5  7  9 
    2  9  9  9  4 
    6  9  9  9  8 
    1  3  5  7  0 
则函数值为61。 
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。 
    试题程序:*/
#include<stdio.h>
#include<stdlib.h>
#define  M  4
#define  N  5
int fun( int a [M][N])
{
     /***************Begin************/


     /*************** End ************/
}
void main()
{
  FILE *wf,*in;
  int aa[M][N]={{1,3,5,7,9},{2,9,9,9,4},{6,9,9,9,8},{1,3,5,7,10}};
  int i, j, y;
  printf ("The original data is :\n ");
  for(i=0; i<M;i++)
     {for (j=0; j<N;j++) 
          printf("%6d ",aa[i][j]);
      printf("\n ");
     }
  y=fun(aa);
  printf("\nThe sun: %d\n ",y);
  printf("\n ");
/******************************/
 in=fopen("in10.dat","r");
  wf=fopen("out10.dat","w");
  for(i=0;i<M;i++)
    for(j=0;j<N;j++)
      fscanf(in,"%d",&aa[i][j]);
  y=fun(aa);
  fprintf (wf,"%d",y);
  fclose(wf);
  fclose(in);
/*****************************/
system("pause");
} 
