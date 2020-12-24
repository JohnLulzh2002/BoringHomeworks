/*N名学生的成绩已在主函数中放入一个带头节点的链表结构中,h指向链表的头节点。
请编写函数fun,它的功能是:求出平均分,由函数值返回。 
例如,若学生的成绩是85,76,69,91,72,64,87,则平均分应当是78.625。 
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号中填入所编写的若干语句。
试题程序:*/ 
#include<stdlib.h>
#include<stdio.h>
#define N 8
struct slist
{ double s;
  struct slist *next;
};
typedef struct slist STREC;
double fun(STREC *h)
{
/***********Begin***************/
  double av=0.0; 
    STREC *p=h->next; 
/*p直接指向"头节点"的下一个节点,即第一个成绩*/ 
    while(p!=NULL) 
    {av=av+p->s; /*求总分数*/ 
        p=p->next; 
    } 
    return av/N; /*返回平均值*/ 

/***********End**************/
}
STREC *creat(double *s)        /*创建链表*/
{ 
  STREC *h,*p,*q; 
  int i=0;
  h=p=( STREC*)malloc(sizeof(STREC)); 
  p->s=0;
  while(i<N)
    {q=( STREC*)malloc(sizeof(STREC));
     q->s=s[i];i++;p->next=q;p=q;
    }
  p->next=0;
  return h;
}
outlist(STREC *h)
{ 
  STREC *p;
  p=h->next; 
  printf("head ");
  do
    {printf("->%4.1f ",p->s);
     p=p->next;    /*输出各成绩*/
    }
  while(p!=NULL);
  printf("\n\n");
}
int main()
{
  FILE *wf,*in;
  double s[N]={85,76,69,85,91,72,64,87},ave;
  int i;
  STREC *h;
  h=creat(s); 
  outlist(h);
  ave=fun(h);
  printf("ave=%6.3f\n ",ave);
/******************************/
  in=fopen("in25.dat","r");
  i=0;
  while(!feof(in))
  {
     fscanf(in,"%d\n",&s[i]);
     i++;
  }
  h=creat(s); 
  outlist(h);
  ave=fun(h);
  wf=fopen("out25.dat","w");
  fprintf(wf,"%6.3f\n",ave);
  fclose(wf);
  fclose(in);
/*****************************/
  return 0;
}
