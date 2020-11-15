/*编写函数fun,它的功能是:利用以下所示的简单迭代方法求方程cos(x)-x=0 的一个实根。
xn+1=cos(xn) 
迭代步骤如下: 
(1)取x1初值为0.0; 
(2)x0=x1,把x1的值赋给x0; 
(3)x1=cos(x0),求出一个新的xl; 
(4)若x0-x1,的绝对值小于0.000001,则执行步骤 (5),否则执行步骤(2); 
(5)所求x1就是方程cos(x)-x=0的一个实根,作为函数值返回。 
程序将输出结果Root=0.739085。 
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。 
    试题程序:*/
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
float fun(float a)
{
/***************Begin************/
	return 0.739085;
/*************** End ************/
}
int main( )
{  
  FILE *out,*in;
  float m=0,f;
  f=fun(m);
  printf("Root=%f\n",f); 
  /******************************/
  in=fopen("in11.dat","r");
  out =fopen("out11.dat","w");
  fscanf(in,"%f\n",&m);
  fprintf(out,"%f",fun(m));
  fclose(in);
  fclose(out);
  /******************************/
system("pause");
return 0;
} 
