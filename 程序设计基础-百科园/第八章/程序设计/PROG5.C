/*设一个班级有N个人，除学号外，还有语文、数学、英语三科成绩。
请编写函数fun,它的功能是: 求出班级学生的单科平均分，平均分通过函数参数返回。
注意:部分源程序给出如下。 
请勿改动main函数和其他函数中的任何内容,仅在函数fun的注释语句之间填入所编写的若干语句。 
试题程序*/
#include <stdio.h>
#define  N 16
typedef  struct
{ char num[10];
  int s1;
  int s2;
  int s3;
} STREC;
void fun (STREC *a,double *b,double *c,double *d)
{
/************Begin************/
	int i;
	for(i=0;i<N;i++){
		*b+=a[i].s1;
		*c+=a[i].s2;
		*d+=a[i].s3;
	}
	*b/=N;
	*c/=N;
	*d/=N;
/************End**************/
}
int main()
{
  STREC h[N], s[N]={{"GA05",85,89,76},{"GA03",76,75,90},{"GA02",69,78,90},{"GA04",85,77,56},{"GA01",91,92,95},
			{"GA07",72,73,80},{"GA08",64,76,45},  {"GA06",87,87,98},{"GA015",85,90,86},{"GA013",91,98,97},
			{"GA012",64,70,55},{"GA014",91,90,88},{"GA011",91,92,93},{"GA017",64,56,78},{"GA018",64,89,56},{"GA016",72,77,79}};
  int i; 
  double m,n,k; 
  FILE *out,*in;
  fun(s,&m,&n,&k);
  printf("The average score:\n");
  printf("%.2f %.2f %.2f\n",m,n,k);
  /******************************/
  in=fopen("in53.dat","r");
  out=fopen("out53.dat","w");
  i=0;
  while(!feof(in))
  {
  	fscanf(in,"%s %d %d %d",h[i].num,&h[i].s1,&h[i].s2,&h[i].s3);
  	i++;
  }
  fun(h,&m,&n,&k);
  fprintf(out,"%.2f %.2f %.2f\n",m,n,k);
  fclose(out);
  fclose(in);
  /******************************/
  return 0;
}