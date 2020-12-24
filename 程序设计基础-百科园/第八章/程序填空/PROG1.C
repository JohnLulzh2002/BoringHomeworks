/*已知学生的记录由学号和学习成绩构成,N名学生的数据已存入a结构体中,给定程序的功能是找出成绩最低的学生记录,
通过形参返回主函数。注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。 本题程序: */
#include <stdio.h>
#include <string.h>
#define N 10
typedef struct ss  /*定义结构体*/
{ char num[10]; 
  int s;
} STU;
void fun(STU a[], STU *s)
{
/**********FILL**********/
  STU  h;
   int i;
   h=a[0];
   for(i=1;i<N;i++)
	if(a[i].s<h.s)
/**********FILL**********/
		h=a[i];
/**********FILL**********/
   *s=h;
}
int main()
{ 
STU a[N]={{ "A01",81},{ "A02",89},
{ "A03",66},{ "A04",87},{ "A05",77},
{ "A06",90},{ "A07",79},{ "A08",61},
{ "A09",80},{ "A10",71}},m;
  int i;
  printf("*****The original data*****");
  for(i=0;i<N;i++) 
     printf("No=%s Mark=%d\n", a[i].num,a[i].s);
  fun(a,&m);
printf("*****THE RESULT*****\n");
  printf("The lowest :%s, %d\n",m.num,m.s);
return 0;
}
