/*下列给定程序中,函数fun的功能是:对N名学生的学习成绩,按从高到低的顺序找出前m(m<=10)名学生,
并将这些学生数据存放在一个动态分配的连续存储区中,此存储区的首地址作为函数值返回。 
请改正程序中的错误,使它能得出正确的结果。 
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。 
试题程序:*/ 
#include <stdlib.h>
#include  <string.h>
#include  <stdio.h>
#include  <malloc.h>
#define N 10
typedef struct ss
   { char num[10];
     int s;
   } STU;
STU *fun(STU a[], int m)
{ STU b[N],*t;
  int i, j,k;
/**********ERROR**********/
  t=(STU *)calloc(m,sizeof(STU));
  for(i=0;i<N;i++) b[i]=a[i];
  for(k=0;k<m;k++)
     { for (i=j=0;i<N;i++)
          if(b[i].s>b[j].s) j=i;
/**********ERROR**********/
      t[k]=b[j];
      t[k].s=b[j].s;
      b[j].s=0;
     }
return t;
}
void outresult(STU a[],FILE *pf)
{ int i;
  for(i=0;i<N;i++)
  fprintf(pf, "No=%s Mark=%d\n ",
a[i].num, a[i].s);
  fprintf(pf, "\n\n ");
}
int main()
{ STU a[N]={{ "A01 ",81},{ "A02 ",89},{ "A03 ",66},{ "A04 ",87},{ "A05 ",77},
			{ "A06 ",90},{ "A07 ",79},{ "A08 ",61},{ "A09 ",80},{ "A10 ",71}};
  STU *pOrder;
  int i, m;
  printf("*****THE RESULT*****\n");
  outresult(a,stdout);
  printf("\nGive the number of the students who have better score: ");
  scanf("%d",&m);
  while(m>10)
       { printf("\nGive the number of the students who have better score: ");
  scanf("%d",&m);
}
  pOrder=fun(a,m);
  printf("***** THE RESULT*****\n");
  printf("The top :\n");
  for(i=0;i<m;i++)
     printf("%s  %d\n",pOrder[i].num, pOrder[i].s);
  free(pOrder);
return 0;
}  
