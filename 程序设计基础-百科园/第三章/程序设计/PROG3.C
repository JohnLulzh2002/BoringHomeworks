/*编写函数fun()，其功能是生成带符号整数x的16位补码并保存到c所指向的数组中（其中：c[15]存放补码的符号位，c[14]~c[0]依次存放补码从高位到低位的数值位）。
要求在fun函数的注释语句之间编写若干语句，主函数不要改动。
提示：正整数的补码与其原码相同，负整数的补码是其原码除符号位外的其他数值位按位取反，再在末尾加1的运算而得到。
*/
#include<stdio.h> 
#include<stdlib.h>
void fun(int x,int c[])
{
	/*********Begin********/
	int i=0;
	c[15]=x<0;
	if(x<0)x++;
	x=x>-1?x:-x;
	for(;i<15;i++){
		c[i]=x%2;
		if(c[15])c[i]=1-c[i];
		x/=2;
	}
	/*********End**********/
}
int main()
{
	FILE *in,*out;
	int a,i,code[16];
	printf("Input a:\n");
	scanf("%d",&a);
	fun(a,code);
	for(i=15;i>=0;i--)
	  printf("%d",code[i]);
	printf("\n");
	/*********************/
	in=fopen("in76.dat","r");
	out=fopen("out76.dat","w");
	while(!feof(in))
	{
		fscanf(in,"%d\n",&a);
		fun(a,code);
		for(i=15;i>=0;i--)
		  fprintf(out,"%d",code[i]);
		fprintf(out,"\n");
	}
	fclose(out);
	fclose(in);
            system("pause");
	return 0;
}