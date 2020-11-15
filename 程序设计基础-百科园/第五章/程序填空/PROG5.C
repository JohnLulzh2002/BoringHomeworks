/*数组xx[N]保存着一组3位数的无符号正整数,其元素的个数通过变量num传入函数fun。请补充函数fun,该函数的功能是:
从数组xx中找出个位和百位的数字相等的所有无符号整数,结果保存在数组yy中,其个数由函数fun返回。 
例如,当xx[8]={135,787,232,222,424,333,141,541}时, 
bb[6]={787,232,222,424,333,141}。 
注意:请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。 试题程序: */
#include <stdio.h>
#define N 1000
int fun(int xx[],int bb[],int num)
{
	 int i,n=0;
	 int g,b;
	 for(i=0;i<num;i++)
	 {
/**********FILL**********/
		g=xx[i]%10;
		b=xx[i]/100;
		if(g==b)
/**********FILL**********/
		bb[n++]=xx[i];
	 }
/**********FILL**********/
	 return n;
}
int main()
{
	 int xx[8]={135,787,232,222,424,333,141,541};
	 int yy[N];
	 int num=0,n=0,i=0;
	 num=8;
	 printf("***original data ***\n");
	 for(i=0;i<num;i++)
		printf("%u ",xx[i]);
	 printf("\n\n\n");
	 n=fun(xx,yy,num);
	 printf("\nyy= ");
	 for(i=0;i<n;i++)
		printf("%u ",yy[i]);
return 0;
}