/*假定输入的字符串中只包含字母和*号。请编写函数fun,它的功能是:除了字符串前导的*号之外,将串中其他*号全部删除。
在编写函数时,不得使用C语言提供的字符串函数。 
例如,若字符串中的内容为****A*BC*DEF*G*******,删除后,字符串中的内容则应当是****ABCDEFG。 
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。 
试题程序: */
#include <string.h>
#include <stdio.h>
void  fun  (char *a)
{
/************Begin*************/
	int i=-1,j;
	while(a[++i]=='*');
	while(a[i]){
		if(a[i]=='*')
			for(j=i;a[j-1];j++)
				a[j]=a[j+1];
		else i++;
	}
/************End**************/
}
int main()
{
  char s[81];
  FILE *in,*out;
  int i;
  printf("Enter a string :\n");
  gets(s);
  fun(s);
  printf("The string after deleted:\n");
  puts(s);
  /******************************/
  in=fopen("in21.dat","r");
  out=fopen("out21.dat","w");
  for(i=0;i<8;i++)
  {
	  fscanf(in,"%s",s);
	  fun(s);
      fprintf(out,"%s\n",s);
  }
  fclose(in);
  fclose(out);
  /******************************/
  return 0;
}
