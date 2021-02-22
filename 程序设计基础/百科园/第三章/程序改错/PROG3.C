/*下列给定程序中,函数fun的功能是:求出以下分数序列的前n项之和。 
2/1,3/2,5/3,8/5,13/8,21/13,… 
和值通过函数值返回main函数。例如,若输入n=5,则应输出8.391667。 
请改正程序中的错误,使它能得出正确的结果。 
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。试题程序: */
#include  <stdio.h>
/**********ERROR**********/
double fun (int n)
{ int a=2,b=1,c, k;
  double s=0.0;
  for(k=1;k<=n;k++)
     {s=s+1.0*a/b;
/**********ERROR**********/
      c=a;a+=b;b=c;
     }
  return(s);
}
int main()
{ 
int n=5;
printf("\nThe value of function is:%lf\n",fun(n));
return 0;
}