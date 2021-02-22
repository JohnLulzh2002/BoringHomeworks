/*人员的记录由编号和出生年、月、日组成,N名人员的数据已在主函数中存入结构体数组std中,且编号唯一。
函数fun的功能是:找出指定编号人员的数据,作为函数值返回,由主函数输出,若指定编号不存在,返回数据中的编号为空串。 
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。 
试题程序: */
#include <stdio.h>
#include <string.h>
#define N 8
typedef struct
{
  	char num[10];
	int year,month,day;
}STU;
/**********FILL**********/
   STU  fun(STU *std,char *num)
{
	int i;
	STU a={"",9999,99,99};
	for(i=0;i<=N;i++)
/**********FILL**********/
		if(strcmp(std[i].num,num)==0)
/**********FILL**********/
			return (std[i]);
	return a;
}
int main()
{
	STU std[N]={{"11111",1984,2,15},{"22222",1983,9,21},{"33333",1984,9,1},{"44444",1983,7,15},
{"55555",1984,9,28},{"666666",1983,11,14},{"77777",1983,6,22},{"88888",1984,8,18}};
	STU p;
	char n[10]="666666";
	p=fun(std,n);
	if(p.num[0]==0)
	{
		printf("\nNot found!\n");
	}
	else
	{
		printf("\nSucceed!\n");
		printf("%s   %d-%d-%d\n",p.num,p.year,p.month,p.day);
	}
return 0;
}
