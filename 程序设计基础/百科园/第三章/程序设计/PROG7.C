/*请编写函数fun,其功能是计算并输出如下式子的值: 
Sn=1-1/1!+1/2!-1/3!+1/4!-…+1/n! 
例如,若主函数从键盘给n输入13,则输出为Sn=0.367879；n=2,则Sn=0.500000。 
注意:n的值要求大于1但不大于13。部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中的注释语句之间填入所编写的若干语句。 
试题程序: */
#include <stdio.h>
#include<stdlib.h> 
double fun(int n)
{
    /*********Begin*********/
	double s=1;
	int i=1,down=1,sgn=1;
	for(;i<=n;i++){
		down*=i;
		sgn=-sgn;
		s+=1.0/down*sgn;
	}
	return s;
    /*********End*********/
}
int main()
{
  int n,k,i; 
  double s;
  FILE *out,*in;
  printf("\nInput n: "); 
  scanf("%d",&n);
  s=fun(n);
  printf("s=%lf\n",s);
  /******************************/
  in=fopen("in65.dat","r");
  out=fopen("out65.dat","w");
  fscanf(in,"%d",&k);
  for(i=1;i<=k;i++)
  {
  	  fscanf(in,"%d\n",&n);
	  fprintf(out,"%lf\n",fun(n));
  }
  fclose(in);
  fclose(out);
  /******************************/
  system("pause");
  return 0;
}