/*请补充函数fun,该函数的功能是:返回字符数组中指定字符的个数,指定字符从键盘输入。 注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。 试题程序: */
#include <stdlib.h>
#include <stdio.h>
#define N 80
int fun (char s[],char ch)
{
	 int i=0,n=0;
/**********FILL**********/
	 while(s[i])
	 {
/**********FILL**********/
		if(ch==s[i])
			n++;
		i++;
	 }
/**********FILL**********/
	 return n;
}
int main()
{
	 int n;
	 char str[N], ch;
	 printf("\nInput a string:\n");
	 gets(str);
	 printf("\nInput a charactor:\n");
	 scanf("%c",&ch);
	 n=fun(str, ch);
	 printf("\nnumber of %c:%d", ch, n);
return 0;
}
