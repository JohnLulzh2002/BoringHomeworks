/*下列给定程序中,函数fun的功能是:求表达式s=aa…aa-…-aa-aa-a(此处aa…aa表示n个a,a和n的值在1至9之间)的值。例如a=3,n=6,则以上表达式为: 
s=333333-33333-3333-333-33-3 
其值是296298。a和n是函数fun的形参,表达式的值作为函数值传回main函数。 
请改正程序中的错误,使它能计算出正确的结果。 
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。 
试题程序:*/ 
#include <conio.h>
#include <stdio.h>
long fun(int a,int n)
{
  int j;
/**********ERROR**********/
  long s=0,t=0;  
/**********ERROR**********/
  for(j=0;j<n;j++)
	t=t*10+a;
  s=t;
  for(j=1;j<n;j++)
  {
/**********ERROR**********/
        t=t/10;
 		s=s-t;
  }
  return(s);
}
int main()
{
  int a,n;
  printf("\nPlease enter a and n: ");
  scanf("%d%d",&a,&n);
  printf("\nThe value of function is %ld\n", fun(a,n));
  return 0;
}
