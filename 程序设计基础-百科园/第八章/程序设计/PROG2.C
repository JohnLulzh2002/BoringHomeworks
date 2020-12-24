/*有n个学生，每个学生的数据包括学号，数学、英语、计算机程序设计三门课的成绩，从键盘输入这些学生数据，要求按三门课程的总分从高到低排序，
并将总分排名靠后的10%的同学的等级确定为"不合格"，其余同学为"合格"，并输出相应的信息。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中注释语句之间填入所编写的若干语句。*/
#include <stdio.h>
#include<string.h>
#define  N 50
typedef  struct
{ char num[10];/*学号*/
  int s1;
  int s2;
  int s3;
  int sum; /*总分*/
  char level[10]; /*等级*/
} STU;
void fun (STU a[],int n)
{
/************Begin************/
	int i,j;
	STU t;
	for(i=0;i<n;i++)
		a[i].sum=a[i].s1+a[i].s2+a[i].s3;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++)
			if(a[i].sum<a[j].sum){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		if(i+1<n*0.9){
			a[i].level[0]='合';
			a[i].level[1]='格';
			a[i].level[2]=0;
		}
		else{
			a[i].level[0]='不';
			a[i].level[1]='合';
			a[i].level[2]='格';
			a[i].level[3]=0;
		}
	}
 /************End**************/
}
int main()
{
  STU s[N]={{"GA05",85,89,76},{"GA03",76,75,90},{"GA02",69,78,90},{"GA04",85,77,56},{"GA01",91,92,95},
				{"GA07",72,73,80},{"GA08",64,76,45},  {"GA06",87,87,98},{"GA015",85,90,86},{"GA013",91,98,97}};
  int i,n=10; 
  FILE *out,*in;
  fun(s,n);
  printf("There are :\n");
  for(i=0;i<n;i++)
    printf("%s %d %d %d %d %s\n",s[i].num,s[i].s1,s[i].s2,s[i].s3,s[i].sum,s[i].level);
  /******************************/
  in=fopen("in63.dat","r");
  out=fopen("out63.dat","w");
  i=0;
  while(!feof(in))
  {
  	fscanf(in,"%s %d %d %d",s[i].num,&s[i].s1,&s[i].s2,&s[i].s3);
  	i++;
  }
  n=i;
  fun(s,n);
  for(i=0;i<n;i++)
    fprintf(out,"%s %d %d %d %d %s\n",s[i].num,s[i].s1,s[i].s2,s[i].s3,s[i].sum,s[i].level);
  fclose(out);
  fclose(in);
  /******************************/
  return 0;
}
