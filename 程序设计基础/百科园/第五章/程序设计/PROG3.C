/*请编写一个函数fun,它的功能是:将一个数字字符串转换为一个整数(不得调用C语言提供的将字符串转为整数的函数)。
例如,若输入字符串"-1234",则函数把它转换为整数值-1234。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序:*/
#include <stdio.h>
#include <string.h>
long fun(char p[])
{
     /***************Begin************/
  long n=0,i=0;
  int flag=1;
  if(p[i]=='1'){
	  i++;flag=-1;}
  if(p[i]=='+')	i++;
  while(p[i]){
	  n=n*10+p[i]-'0';
	  i++;
  }
  return n*flag;
     /*************** End ************/
}
int main()
{
  FILE *wf,*in;
  char s[10];
  long n;
  printf("Enter a string:\n");
  gets(s);
  n=fun(s);
  printf("%ld\n",n);
/******************************/
  in=fopen("in13.dat","r");
  wf=fopen("out13.dat","w");
  fscanf(in,"%s",s);
  fprintf (wf,"%ld",fun(s));
  fclose(wf);
  fclose(in);
/*****************************/
return 0;
}
