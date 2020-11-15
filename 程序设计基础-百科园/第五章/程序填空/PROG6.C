/*请补充函数fun,该函数的功能是:寻找两个整数之间的所有素数(包括这两个整数),把结果保存在数组bb中,函数返回素数的个数。
例如,输入6和21,则输出为:7 11 13 17 19。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。
试题程序: */
#include <stdio.h>
#define N 1000
int fun(int n,int m,int bb[N])
{
	 int i,j,k=0,flag;
	 for(j=n;j<=m;j++)
	 {
/**********FILL**********/
		flag=1;
		for(i=2;i<j;i++)
		{
/**********FILL**********/
			if(j%i==0)
			{
				flag=0;
				break;
			}
         }
/**********FILL**********/
		if(flag)
			bb[k++]=j;
	 }
	 return k;
}
int main()
{
	 int n=0,m=0,i,k;
	 int bb[N];
	 printf("Input n\n");
	 scanf("%d",&n);
	 printf("Input m\n");
	 scanf("%d",&m);
	 for(i=0;i<m-n;i++)
		bb[i]=0;
/**********FILL**********/
	 k=fun(n,m,bb);
	 for(i=0;i<k;i++)
		printf("%4d",bb[i]);
	 return 0;
}