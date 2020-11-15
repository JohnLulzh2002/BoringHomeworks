/*请补充main函数,该函数的功能是:从键盘输入一个字符串及一个指定字符,然后把这个字符及其后面的所有字符全部删除。
 结果仍然保存在原串中。 
例如,输入"abcdef",指定字符为"e",则输出"abcd"。 
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在main函数的横线上填入所编写的若干表达式或语句。 
试题程序:*/
#include <stdlib.h>
#include <stdio.h>
#define N 80
int main()
{
	 int i=0;
	 char str[N];
	 char ch;
	 printf("\n Input a string:\n");
	 gets(str);
	 printf("\n Input a charator;\n");
	 scanf("%c", &ch);
	 while(str[i]!='\0')
	 {
		if(str[i]==ch)
/**********FILL**********/
		 break;
/**********FILL**********/
		  i++  ;
	 }
/**********FILL**********/
	 str[i]= 0 ;
	 printf("\n*** display string ***\n");
	 puts(str);
   return 0;
}
