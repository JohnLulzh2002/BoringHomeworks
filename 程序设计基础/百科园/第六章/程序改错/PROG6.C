/*
假定输入的字符串中只包含字母和*号。函数fun的功能是:除了字符串前导和尾部的*号之外,将串中其他*号全部删除。
例如,若字符串中的内容为****A*BC*DEF*G******,删除后,字符串中的内容应当是****ABCDEFG******。
注意:不得增行或删行,也不得更改程序的结构。
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void fun(char *a)
{
/**********ERROR**********/
    int i=0;
    char *t=a,*f=a;/* t指向字符串中最后一个字母 ,f指向字符串中第一个字母*/ 
    char *q=a;
    while(*t)
	t++;
    t--;
    while(*t=='*')
	t--;
    while(*f=='*')
	f++;
/**********ERROR**********/
    while (q<f)
    { 
        a[i]=*q;
        q++;
        i++; 
    } 
    while (q<t)
    {
/**********ERROR**********/
	if(*q!='*') 
    	{ 
    	    a[i]=*q;
	    i++; 
    	} 
        q++; 
    }
    while (*q) 
    { 
        a[i]=*q;
        i++;
        q++; 
    } 
/**********ERROR**********/
    a[i]=0;
}
int main ()
{
	char s[81];
	printf("Entre a string:\n");
	gets(s);
/**********ERROR**********/
	fun(s);
	printf("The sting after deleted:\n");
	puts(s);
       system("pause");
	return 0;
}
