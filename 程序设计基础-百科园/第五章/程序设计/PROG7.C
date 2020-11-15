/*编写函数int fun(int lim, int aa[MAX]),该函数的功能是求出小于或等于lim的所有素数并放在aa数组中,
该函数返回所求出的素数的个数。 
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。 
试题程序: */
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int fun(int lim, int aa[MAX])
{
/**********Begin**********/




/**********End**********/  
}
int main()
{
  FILE *wf,*in;
  int limit,i,k,sum;
  int aa[MAX];
  printf("输入一个整数");
  scanf("%d",&limit);
  sum=fun(limit,aa);        
  for(i=0;i<sum;i++)
     {
      if(i%10==0&&i!=0)    /*每行输出10个数*/
         printf("\n ");
      printf("%5d ",aa[i]);
    }
/******************************/
  wf=fopen("2.out","w");
  in=fopen("2.dat","r");
  fscanf(in,"%d",&k);
  sum=fun(k,aa);        
  for(i=0;i<sum;i++)
      fprintf(wf,"%d\n",aa[i]);
  fclose(wf);
  fclose(in);
/*****************************/
system("pause");
return 0;
}