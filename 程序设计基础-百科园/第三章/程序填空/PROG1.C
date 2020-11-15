/*函数fun的功能是:从三个形参a、b、c中找出中间的数,作为函数值返回。
例如,当a=3,b=5,c=4时,中间的数为4。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。
试题程序:*/
#include  <stdio.h>
int fun(int a,int b,int c)
{ int t;
/**********FILL**********/
  t=(a>b)?(b>c?b:(a>c?c:a))
/**********FILL**********/
	  :((a>c)?a
/**********FILL**********/
	  :((b>c)?c:b));  
  return t; 
}
int main()
{ 
  int a1=3,a2=5,a3=4,r;
  r=fun(a1,a2,a3);
  printf("\nThe  middle number is: %d\n ",r);
return 0;
}
