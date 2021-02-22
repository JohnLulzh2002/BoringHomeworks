/*请补充函数fun,该函数的功能是:判断某一个年份是否为闰年。 例如,1900年不是闰年,2004是闰年。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。
试题程序:*/
#include <stdlib.h>
#include <stdio.h>
int fun(int n)
{
	 int flag=0;
	 if(n%4==0)
	 {
/**********FILL**********/
		if (  n%100    )
			flag=1;
	 }
/**********FILL**********/
	 if (   n%400==0   )
		flag=1;
/**********FILL**********/
	 return    flag  ;
}
int main()
{
	 int year;
	 printf("Input the year:");
	 scanf("%d",&year);
	 if (fun(year))
		printf("%d is a leap year. \n",year);
	 else
		printf("%d is not a leap year.\n",year);
return 0;
}
