/*下列给定程序中,函数fun的功能是:按如下递归公式求函数值。
 
例如,当给n输入5时,函数值为18;当给n输入3时,函数值为14。
请改正程序中的错误,使它能得出正确的结果。
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。
试题程序: */
#include  <stdio.h>
/**********ERROR**********/
int fun(int n)
{ 
  int c;
/**********ERROR**********/
  if(n==1)
	c=10;
  else
	c=fun(n-1)+2;
  return(c);
}

int main()
{ 
  int  n;
  printf("Enter n: ");
  scanf("%d",&n);
  printf("The result: %d\n\n" ,fun(n));
return 0;
}
