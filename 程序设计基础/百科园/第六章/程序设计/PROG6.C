/*假定输入的字符串中只包含字母和*号。请编写函数fun,它的功能是:将字符串中的前导*号全部删除,中间和后面的*号不删除。
例如,若字符串中的内容为****A*BC*DEF*G*******,删除后,字符串中的内容则应当是A*BC*DEF*G*******。
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。 
试题程序: */
#include <stdio.h>
void  fun  (char *a)
{
/************Begin**************/
	int i;
	while(*a=='*')
		for(i=0;a[i-1];i++)
			a[i]=a[i+1];
/************End*************/
}
int main()
{
  FILE *wf,*in;
  int i;
  char s[81],t[81]="****A*BC*DEF*G*******";
  printf("Enter a string :\n");
  gets(s);
  fun(s);
  printf("The string after deleted:\n");puts(s);
/******************************/
  in=fopen("in18.dat","r");
  wf=fopen("out18.dat","w");
  for(i=0;i<8;i++)
  {
	  fscanf(in,"%s",t);
	  fun(t);
      fprintf(wf,"%s\n",t);
  }
  fclose(in);
  fclose(wf);
/*****************************/
 return 0;
}