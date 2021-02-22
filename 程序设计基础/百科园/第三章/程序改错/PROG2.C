/*下列给定程序中,函数fun的功能是:计算S=f(-n)+f(-n+1)+…+f(0)+f(1)+f(2)+…f(n)的值。 
例如,当n为5时,函数值应为10.407143。f(x)函数定义如下: 
f(x)=     
请改正程序中的错误,使它能得出正确的结果。 
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。 
试题程序: */
#include  <stdlib.h>
#include  <stdio.h>
#include  <math.h>
/**********ERROR**********/
double f(double x)
{
 if(x==0.0||x==2.0)
    return 0.0;
 else if(x<0.0)
    return(x-1)/(x-2);
 else 
    return(x+1)/(x-2);
}
double fun(int n)
{ 
  int i;  
  double s=0.0,y;
  for(i=-n; i<=n;i++)
     { y=f(1.0*i); s+=y;}
/**********ERROR**********/
  return s;
}
int main()
{ 
  printf("%lf\n", fun(5));
  return 0;
}
