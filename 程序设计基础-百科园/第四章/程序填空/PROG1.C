/*请补充函数fun,函数fun的功能是求n的阶乘。注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。
试题程序: */
#include <stdio.h>
long fun(int  n)
{
/**********FILL**********/
	 if (    n>1   )
/**********FILL**********/
		return(n*fun(   n-1  ));
/**********FILL**********/
	 return    1   ;
}
int main()
{
	 printf("10!=%ld\n",fun(10));
return 0;
}
