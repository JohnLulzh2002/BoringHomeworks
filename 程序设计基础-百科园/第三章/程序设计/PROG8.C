/*从指定的一个自然数n0开始，按公式  产生一个数列，直到  为1,
函数fun()是计算所产生的数列中所有项中值为最大一项的值，n0作为函数参数，函数的返回值是数列中的最大值。
如n0=7时，所生成的数列的最大值为52 。注意：不要修改main函数的结构，只在fun函数的注释语句之间编写程序代码。
*/
#include<stdio.h>
#include<stdlib.h> 
int fun(int n)
{
/**************Begin***********/
	int max=n;
	while(n-1){
		if(n%2==0)n/=2;
		else	n=3*n+1;
		if(n>max)max=n;
	}
	return max;
/*************End*************/
}
int main() 
{
	FILE *in,*out;
	int n;
	scanf("%d",&n);
	printf("The number is:%d\n",fun(n));
	/*********************/
	in=fopen("in85.dat","r");
	out=fopen("out85.dat","w");
	while(!feof(in))
	{
		fscanf(in,"%d",&n);
		fprintf(out,"%d\n",fun(n));
	}
	fclose(in);
	fclose(out);
       system("pause");
	return 0;
}