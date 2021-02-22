/*从键盘输入一组小写字母,保存在字符数组str中。请补充函数fun,该函数的功能是:
把字符数组str中字符下标为奇数的小写字母转换成对应的大写字母,结果仍保存在原数组中。 
例如,输入"acegikm",则输出"aCeGiKm"。 
注意:请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。 试题程序: */
#include <stdio.h>
#define N 80
void fun (char s[])
{
	 int i=0;
/**********FILL**********/
	 while (s[i])
	 {
		if(i%2!=0)
/**********FILL**********/
			s[i]-=32;
/**********FILL**********/
		i++;
	 }
}
int main()
{
	 char str[N];
	 printf("\n Input a string:\n");
	 gets(str);
	 printf("\n*** original string ***\n");
	 puts(str);
	 fun(str);
	 printf("\n*** new string ***\n");
	 puts(str);
     return 0;
}