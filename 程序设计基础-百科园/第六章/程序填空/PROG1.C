/*给定程序的功能是:分别统计字符串中大写字母和小写字母的个数。 
例如,给字符串ss输入:AaaaBBb123CCccccd,则输出结果应为:upper=5,lower=9。
注意:部分源程序给出如下。
请勿改动函数中的其他内容,仅在横线上填入所编写的若干表达式或语句。
试题程序: */
#include <stdlib.h>
#include <stdio.h>
void fun(char *s,int *a,int *b)
{
	 while(*s)
	 {
		if(*s>='A' && *s<='Z')
/**********FILL**********/
		  (*a)++;
		if(*s>='a' && *s<='z')
/**********FILL**********/
		(*b)++  ;
	 	s++;
	 }
}

int main()
{
	 char s[100];
	 int upper=0,lower=0;
	 printf("\nPlease a string: ");
	 gets(s);
	 fun(s,&upper,&lower);
/**********FILL**********/
	 printf("\n upper=%d lower=%d\n",upper,lower   );
return 0;
} 
