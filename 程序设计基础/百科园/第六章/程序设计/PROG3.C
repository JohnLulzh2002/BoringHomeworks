/*请编写函数fun,该函数的功能是:判断字符串是否为回文,若是则函数返回1,主函数中输出"YES",否则返回0,主函数中输出"NO"。
回文是指顺读和倒读都一样的字符串。例如,字符串LEVEL是回文,而字符串123312就不是回文。
注意:部分源程序给出如下。请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序:*/
#include <stdio.h>
#define N 80
int fun(char str[])
{
    /***************Begin************/
	int i=0,l=0;
	while(str[++l]);
	l--;
	for(;i<l;i++){
		if(str[i]-str[l-i])
			return 0;
	}
	return 1;
    /*************** End ************/
}
int main()
{
	 char s[N];
	 FILE *out,*in;
         char test[][80]={"1234321","123421","123321","abcdCBA"};
	 int i;
	 printf("Enter a string : ");
	 gets(s);
	 printf("\n\n");
	 puts(s);
	 if(fun(s))
		printf("YES\n");
	 else
		printf("NO\n"); 
	 /************************************/
    in=fopen("in12.dat","r");
    for(i=0;i<4;i++)
    fscanf(in,"%s",test[i]);
	 out=fopen("out12.dat","w");
	 for(i=0;i<4;i++)
	 	if(fun(test[i]))
			fprintf(out,"YES\n");
		else
			fprintf(out,"NO\n");
    fclose(in);
	 fclose(out);
	 /************************************/
  return 0;
}
