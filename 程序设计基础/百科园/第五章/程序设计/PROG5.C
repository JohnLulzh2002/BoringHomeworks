/*编写一个函数,从传入的num个字符中找出最长的一个字符串,并通过形参指针max传回该串地址(用****作为结束输入的标志)。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序:*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void fun(char a[][81], int num, char max[])
{
/***************Begin************/
	int l,m=0,i,p;
	for(i=0;i<num;i++){
		l=strlen(a[i]);
		if(l>m){
			p=i;
			m=l;
		}
	}
	for(i=0;i<=m;i++)
		max[i]=a[p][i];
/*************** End ************/
}
int main()
{
  FILE *wf,*in;
  char ss[10][81],ps[81];
  char s[10][81]={"abcd","deg","diegns"},p[81];
  int  i=0,n;
  printf("输入若干个字符串：");
  gets(ss[i]);
  puts(ss[i]);
  while(!strcmp(ss[i], "****")==0)  /*用4个星号作为结束输入的标志*/
     {
      i++;
      gets(ss[i]);
      puts(ss[i]);
     }
  n=i;
  fun(ss,n,ps);
  printf("\nmax=%s\n",ps);
/******************************/
  in=fopen("in15.dat","r");
  wf=fopen("out15.dat","w");
  fscanf(in,"%d",&n);
  for(i=0;i<n;i++)
	  fscanf(in,"%s",s[i]);
  fun(s,n,p);
  fprintf(wf,"%s",p);
  fclose(wf);
  fclose(in);
/*****************************/
  system("pause");
  return 0;
}
