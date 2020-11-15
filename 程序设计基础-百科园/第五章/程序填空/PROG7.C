/*请补充函数fun,该函数的功能是:把ASCII码为偶数的字符从字符串str中删除,结果仍然保存在字符串str中,
字符串str从键盘输入,其长度作为参数传入函数fun。例如,输入"abcdef",输出"ace"。注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。 
试题程序:*/
#include <stdlib.h>
#include <stdio.h>
#define N 80
/**********FILL**********/
  void fun(char s[], int n)
{
	 int i, j;
/**********FILL**********/
    j=0;
	 for (i=0;i<n;i++)
	 {
		if(s[i]%2!=0)
			s[j++]=s[i];
	 }
/**********FILL**********/
     s[j]=0 ;
}
int main()
{
	 int i=0, strlen=0;
	 char str[N];
	 printf("\nInput a string:\n");
	 gets(str);
	 while(str[i]!='\0')
	 {
		strlen++;
		i++;
	 }
	 fun(str, strlen);
	 printf("\n*** display string ***\n");
	 puts (str);
return 0;
}
