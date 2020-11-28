/*请编写函数fun,其功能是:计算并输出给定数组(长度为n)中,每相邻两个元素的平均值的平方根之和。 
例如,若给定数组中的9个元素依次为12.0、34.0、4.0、23.0、34.0、45.0、18.0、3.0、11.0,则输出应为s=35.951014。 
注意:部分源程序给出如下。 请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号的注释语句之间中填入所编写的若干语句。 试题程序:*/ 
#include  <stdio.h>
#include  <math.h>
double fun(double x[],int n)
{
/************Begin**************/	
	double s=0;
	int i;
	for(i=0;i<n-1;i++){
		s+=sqrt((x[i]+x[i+1])/2);
	}
	return s;
/************End**************/
}
int main()
{double s,a[100]={12.0,34.0,4.0,23.0,34.0,45.0,18.0,3.0,11.0};
 int i,n;
 FILE *out,*in;
 printf("\nThe original data is : ");
 for(i=0;i<9;i++)
	printf("%6.1f",a[i]);
 printf("\n\n"); 
 s=fun(a,9);
 printf("s=%lf\n\n",s);
 /******************************/
 in=fopen("in48.dat","r");
 out=fopen("out48.dat","w");
 fscanf(in,"%d",&n);
 for(i=0;i<n;i++)
	 fscanf(in,"%lf",&a[i]);
 s=fun(a,n);
 fprintf(out,"%lf",s);
 fclose(out);
 fclose(in);
 /******************************/
 return 0;
}
