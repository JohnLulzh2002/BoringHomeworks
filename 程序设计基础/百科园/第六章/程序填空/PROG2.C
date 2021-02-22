/*给定程序中,函数fun的功能是:在形参s所指字符串中的每个数字字符之后插入一个*号。
例如,形参s所指的字符串为:def35adh3kjsdf7。执行结果为:def3*5*adh3*kjsdf7*。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。
试题程序:*/
#include <stdio.h>
void fun(char *s )
{
	 int i,j,n;
	 for(i=0;s[i]!='\0';i++)
/**********FILL**********/
	 if(s[i]>='0' && s[i]<='9')
	{
		n=0;
/**********FILL**********/
		while(s[i+1+n]!=0 )
			n++;
		for(j=i+n+1;j>i;j--)
/**********FILL**********/
		s[j+1]=  s[j]   ;
		s[j+1]='*';
			i=i+1;
		}
}
int main()
{
	char s[60]="ba3a54cd23a";
	printf("\n the original string is: %s\n",s);
	fun(s);
	printf("\nthe result is: %s\n",s);
return 0;
}
