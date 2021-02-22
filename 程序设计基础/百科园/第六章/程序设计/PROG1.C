/*请编一个函数fun(char *s),该函数的功能是把字符串中的内容逆置。
例如,字符串中原有的字符串为abcdefg,则调用该函数后,串中的内容为gfedcba。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序:*/
#include <string.h>
#include <stdio.h>
#define N 81
void fun(char*s)
{
/************Begin*************/
	int l=strlen(s)-1,i=0;
	for(;2*i<=l;i++){
		s[i]+=s[l-i];
		s[l-i]=s[i]-s[l-i];
		s[i]-=s[l-i];
	}
/************End**************/
}
int main()
{
	 char a[N];
	 FILE *out,*in;
	 printf("Enter a string:");
	 gets(a);
	 printf("The  original string is:");
	 puts(a);
	 fun(a);
	 printf("\n");
	 printf("The string after modified:");
	 puts(a);
	 strcpy(a,"Hello World! This is a first C program!");
	 fun(a);
	 /******************************/
      in=fopen("in17.dat","r");
      fgets(a,81,in);
	 out=fopen("out17.dat","w");
        fun(a);
	 fprintf(out,"%s",a);
	 fclose(out);
       fclose(in);
	 /******************************/
      return 0;
}
