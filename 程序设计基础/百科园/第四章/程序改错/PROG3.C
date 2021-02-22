/*下列给定程序中,函数fun的功能是:计算函数F(x,y,z)=(x+y)/(x-y)+(z+y)/(z-y)的值。
其中x和y不相等,z和y不等。例如,当x的值为9,y的值为11,z的值为15时,函数值为-3.50。
请改正程序中的错误,使它能得出正确的结果。
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。
试题程序:*/
#include  <stdlib.h>
#include  <stdio.h>
#include  <math.h>
/**********ERROR**********/
#define FU(m,n) (m)/(n)
float fun(float a,float b,float c)
{ float value;
  value=FU(a+b,a-b)+FU(c+b,c-b);
/**********ERROR**********/
  return(value);
}
int main()
{ float x,y,z,sum;
  printf("Input x y z:: ");
  scanf("%f%f%f",&x,&y,&z);
  printf("x=%f,y=%f,z=%f\n ",x,y,z);
  if(x==y||y==z) 
{ printf("Data error! \n ");
exit(0);}
  sum=fun(x,y,z);
  printf("The result is:%5.2f\n ",sum);
return 0;
}
