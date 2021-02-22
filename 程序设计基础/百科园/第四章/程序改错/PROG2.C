/*下列给定程序中,函数fun的功能是:用递归算法计算斐波拉契级数列中第n项的值。
从第一项起,斐波拉契级数序列为1,1,2,3,5,8,13,21,…例如,若给n输入7,该项的斐波拉契级数值为13。
请改正程序中的错误,使它能得出正确的结果。
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。
试题程序:*/
#include <stdio.h>
long fun(int g)
{ 
/**********ERROR**********/
  switch(g)
     {case 0:return 0;
/**********ERROR**********/
	 case 1: case 2:return 1;
     }
  return (fun(g-1)+fun(g-2));
}
int main()
{ 
  long fib; int n;
  printf("Input n:");
  scanf("%d",&n);
  printf("n=%d\n",n);
  fib=fun(n);
  printf("fib=%d\n\n",fib);
return 0;
}
