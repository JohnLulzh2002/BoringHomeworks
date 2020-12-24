/*请编写函数fun,该函数的功能是:统计一行字符串中单词的个数,作为函数值返回。
一行字符串在主函数中输入,规定所有单词由小写字母组成,单词之间有若干个空格隔开,一行的开始没有空格。 
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。 
试题程序:*/
#include<string.h>
#include<stdio.h>
#define N 80
int fun(char *s)
{
 /************Begin*************/
	int count=1,i=1,l=strlen(s);
	for(;i<l-1;i++)
		if(s[i]==' '&&s[i+1]!=' ')
			count++;
	return count;
/*************End*************/
}
int main()
{ 
  FILE *wf,*in;
  char line[N]; 
  int num=0;
  printf("Enter a string:\n "); 
  gets(line);
  num=fun(line);
  printf("The number of word is:%d\n\n ",num);
/******************************/
 in=fopen("in19.dat","r");
  wf=fopen("out19.dat","w");
  fgets(line,81,in);
  fprintf(wf,"%d",fun(line));
  fclose(wf);
  fclose(in);
/*****************************/
  return 0;
}