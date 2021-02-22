/*请补充函数fun(int x[] ,int n),该函数的功能是:把数组中的内容逆置。例如,数组中原有的内容为8,6,7,1,0,9,3,5,4,2,则调用该函数后,数组中的内容为2,4,5,3,9,0,1,7,6,8。
注意:部分源程序给出如下。
请在下面程序的横线上填入所编写的若干表达式或语句。不得增加或删除行。
试题程序: */
#include <stdio.h>
#define N 10
void fun(int  x[ ],int n)
{ 
	int  t,i,j;
/**********FILL**********/ 
	for (i=0;i<n/2 ;i++)
	{ 
/**********FILL**********/
		j=n-1-i;
		t=x[i];
		x[i]=x[j];
		x[j]=t;
	}
}
int main ( )
{
	int i,a[]={8,6,7,1,0,9,3,5,4,2};
	printf("数组元素的原先顺序:\n");
	for (i=0;i<N;i++)
		printf ("%d ",a[i]);
	printf("\n");
/**********FILL**********/
	fun(a ,N);
	printf("逆序操作后的顺序:\n");
	for (i=0;i<N;i++)
		printf("%3d",a[i]);
	printf("\n");
	return 0;
}
