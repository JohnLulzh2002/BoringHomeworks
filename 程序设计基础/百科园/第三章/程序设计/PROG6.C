/*编写函数fun,函数的功能是:根据以下公式计算s,计算结果作为函数值返回;n通过形参传入。 S=1+1/(1+2)+1/(1+2+3)+…+1/(1+2+3+…+n) 
例如,若n的值为11时,函数的值为1.833333。 
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。 
试题程序: */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
float fun(int  n)
{
/***********Begin*************/
	int i=1,mu=0;
	float s=0;
	for(;i<=n;i++){
		mu+=i;
		s+=1.0/mu;
	}
	return s;
/***********End***************/ 
}
int main()
{
  FILE *wf,*in;
  int n; 
  float s;
  printf("\nPlease enter N: ");
  scanf("%d",&n);
  s=fun(n);
  printf("The result is:%f\n " , s);
/******************************/
  in=fopen("in001.dat","r");
  fscanf(in,"%d",&n);
  wf=fopen("out.dat","w");
  fprintf (wf,"%f",fun(n));
  fclose(wf);
  fclose(in);
/*****************************/
system("pause");
return 0;
}
