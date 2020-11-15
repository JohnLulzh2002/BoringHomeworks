/*编写一个函数fun,它的功能是:实现两个字符串的连接(不使用库函数strcat),即把p2所指的字符串连接到p1所指的字符串后。
例如,分别输入下面两个字符串: 
FirstString 
SecondString 
则程序输出:FirstStringSecondString
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。 
试题程序:*/
#include<stdio.h>
#include<stdlib.h>
void fun(char p1[],char p2[])
{
     /***************Begin************/
	int i=0,j=0;
	for(;p1[i];i++);
	for(;p2[j];j++)	p1[i++]=p2[j];
	p1[i]=0;
     /*************** End ************/
}
int main()
{
  FILE *wf,*in;
  char s1[80],s2[40];
  char  p1[80]="FirstString",p2[40]="SecondString";
  printf("Enter s1 and s2:\n") ;
  scanf("%s%s",s1,s2);
  printf("s1=%s\n",s1);
  printf("s2=%s\n",s2);
  printf("Invoke fun(s1,s2):\n");
  fun(s1,s2);
  printf("After invoking:\n");
  printf("%s\n",s1);
/******************************/
  in=fopen("in16.dat","r");
  wf=fopen("out16.dat","w");
  fscanf(in,"%s %s",p1,p2);
  fun(p1,p2);
  fprintf(wf,"%s",p1);
  fclose(in);
  fclose(wf);
/*****************************/
  return 0;
}
