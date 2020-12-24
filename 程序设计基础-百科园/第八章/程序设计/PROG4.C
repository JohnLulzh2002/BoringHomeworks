/*学生的记录由学号和成绩组成,N名学生的数据已在主函数中放入结构体数组s中,请编写函数fun,
它的功能是:按分数的高低排列学生的记录,高分在前。注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序: */
#include <stdio.h>
#define  N  16
typedef  struct
{ char num[10];
  int  s ;
}STREC;
void  fun (STREC  a[])
{
/************Begin*************/
 int i,j; 
    STREC t; 
    for(i=1;i<N;i++) 
    for(j=0;j<N-1;j++) 
    if(a[j].s<a[j+1].s) 
    {t=a[j];a[j]=a[j+1];a[j+1]=t;} 

/************End**************/
}

int main ()
{
  FILE *wf,*in;
    STREC  s[N]={{ "GA005",87},{"GA003",76},{"GA002",69},{"GA004",85},
  {"GA001",99},{"GA007",72},{"GA008",61},{"GA006",88},
  {"GA015",86},{"GA013",91},{"GA012",63},{"GA014",97},
  {"GA011",66},{"GA017",64},{"GA018",62},{"GA016",74}};
  int i,k; 
  fun(s);
  printf("The data after sorted :\n");
  for (i=0; i<N; i++)
       printf("%s %4d\n",s[i].num,s[i].s);  
/******************************/
  in=fopen("in23.dat","r");
  i=0;
  while(!feof(in))
  {
     fscanf(in,"%s %d\n",s[i].num,&s[i].s);
     i++;
   }
   k=i;
  fun(s);
  wf=fopen("out23.dat","w");
  for (i=0; i<k; i++)
       fprintf(wf,"%s %4d\n",s[i].num,s[i].s);  
  fclose(wf);
  fclose(in);
/*****************************/
return 0;
}
