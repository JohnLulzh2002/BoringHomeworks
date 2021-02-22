/*请补充main函数,该函数的功能是:从键盘输入两个字符串并分别保存在字符数组str1和str2中,
用字符串str2替换字符串str1前面的所有字符。注意:str2的长度不大于str1,否则需要重新输入。
例如,如果输入str1="abced",str2="fk",则输出"fkced"。 
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在main函数的横线上填入所编写的若干表达式或语句。
试题程序:*/
#include <stdlib.h>
#include<stdio.h>
#include <string.h>
int main()
{
	 char str1[81],str2[81];
	 char *p1=str1,*p2=str2;
	 do
	 {
		printf(" Input str1 \n");
		gets(str1);
		printf(" Input str2 \n");
		gets(str2);
/**********FILL**********/
	 }while( strlen(str1)<strlen(str2) );
/**********FILL**********/
	 while(  *p2)
		*p1++=*p2++;
	 printf(" Display str1 \n");
/**********FILL**********/
	 puts( str1);
return 0;
} 
