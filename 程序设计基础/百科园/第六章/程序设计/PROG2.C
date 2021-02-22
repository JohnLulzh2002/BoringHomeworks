/*请编写函数fun,其功能是:将两个两位数的正整数a、b合并形成一个整数放在c中。
合并的方式是:将a数的十位和个位依次放在c数的千位和十位上,b数的十位和个位依次放在c数的百位和个位上。
例如,当a=45,b=12,调用该项函数后,c=4152。 
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序: */
#include <stdio.h>
#include <conio.h>
void fun(int a ,int b,long *c)
{
  /************Begin************/
	*c=a/10*1000+b/10*100+(a%10)*10+b%10;
  /************End***************/
}
int main()
{
  int  a,b,i;  
  long c;
  FILE *out,*in;
  printf("Input a ,b: ");
  scanf("%d%d",&a,&b);
  fun(a,b,&c);
  printf("The result is :%ld\n",c);
  /******************************/
  in=fopen("in20.dat","r");
  out=fopen("out20.dat","w");
  for(i=10;i<20;i++)
  {
   fscanf(in,"%d %d",&a,&b);
	fun(a,b,&c);
	fprintf(out,"%d\n",c);
  }
fclose(out);
fclose(in);
/******************************/
return 0;
}
