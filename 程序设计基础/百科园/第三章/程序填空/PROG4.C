/*请补充函数fun,它的功能是:计算并输出n(包括n)以内所有能被3或7整除的自然数的倒数之和。
例如,在主函数中从键盘给n输入30后,输出为:s=1.226323。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。
试题程序: */
#include <stdio.h>
double fun(int n)
{
	 int i;
	 double sum=0.0;
/**********FILL**********/
	 for(i=1;   i<=n  ;i++)
/**********FILL**********/
		if(i%3==0   ||   i%7==0)
/**********FILL**********/
			sum+=   1.0  /i;
	 return sum;
}
int main()
{
	 int n;
	 double s;
	 printf("\nInput n:");
	 scanf("%d",&n);
	 s=fun(n);
	 printf("\n\ns=%f\n",s);
return 0;
}
