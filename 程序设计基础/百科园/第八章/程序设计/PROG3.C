/*学生的记录由学号和成绩组成,N名学生的数据已在主函数中放入结构体数组s中,请编写函数fun,
它的功能是:把分数最高的学生数据放在h所指的数组中。注意:分数高的学生可能不只一个,函数返回分数最高学生的人数。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序: */
#include <stdio.h>
#define  N  16
typedef  struct
{ char num[10];
  int  s ;
}STREC;
int  fun (STREC *a, STREC *b)
{
/*************Begin*************/
 int i,j=0,max=a[0].s; 
    for(i=0;i<N;i++) 
        if(max<a[i].s) 
            max=a[i].s;/*找出最大值*/ 
    for(i=0;i<N;i++) 
        if(max==a[i].s) b[j++]=a[i]; 
/*找出成绩与max相等的学生的记录,存入结构体b中*/ 
    return j; 
/*返回最高成绩的学生人数*/ 
/*************End*************/
}

int main ()
{
  FILE *wf,*in;
  STREC  s[N]={{"GA005",85},{"GA003",76},{"GA002",69},{"GA004",85},
   {"GA001",91},{"GA007",72},{"GA008",64},{"GA006",87},
   {"GA015",85},{"GA013",91},{"GA012",64},{"GA014",91},
   {"GA011",66},{"GA017",64},{"GA018",64},{"GA016",72}};
  STREC h[N];
  int i, n;
  n=fun(s,h);
  printf("The %d highest score :\n",n);
  for (i=0; i<n; i++)
    printf("%s %4d\n ",h[i].num,h[i].s);     /*输出最高分学生的学号和成绩*/
  printf("\n");
/******************************/
  in=fopen("in27.dat","r");
  i=0;
  while(!feof(in))
  {
     fscanf(in,"%s %d\n",s[i].num,&s[i].s);
     i++;
   }
   n=i;
   n=fun(s,h);
  wf=fopen("out27.dat","w");
  fprintf(wf, "%d\n",n);
  for (i=0; i<n; i++)
    fprintf(wf,"%s %4d\n",h[i].num,h[i].s);
  fclose(wf);
 fclose(in);
/*****************************/
return 0;
}
