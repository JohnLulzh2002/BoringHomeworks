/*编写函数fun,其功能是求下面分数数列的前n项的和，  ，
输入项数n得到前n项和s。如输入n=10，s=0.349288，
注意：不要修改main函数的结构，只在fun函数的注释语句之间编写程序代码。
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double fun(int n)
{
	/***********Begin***********/
	int i=1,up=1,sgn=-1;
	long long down=1;
	double s=0;
	for(;i<=n;i++){
		up*=i;
		down*=2*i+1;
		sgn=-sgn;
		s+=sgn*sqrt((double)up/down);
	}
	return s;
	/***********End************/
}

int main()
{
	int n;
	double s;
	FILE *in,*out;
	scanf("%d",&n);
	s=fun(n);
	printf("s=%lf\n",s);
	/***********************/
	in=fopen("in83.dat","r");
	out=fopen("out83.dat","w");
	while(!feof(in))
	{
		fscanf(in,"%d\n",&n);
		fprintf(out,"%lf\n",fun(n));
	}
	fclose(in);
	fclose(out);
            system("pause");
	return 0;	
}
