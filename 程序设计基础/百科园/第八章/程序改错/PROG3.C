/*下列给定程序的功能是:建立一个带头节点的单向链表,并用随机函数为各节点数据域赋值。
函数fun的作用是求出单向链表节点(不包括头节点)数据域中的最大值,并且作为函数值返回。
请改正函数fun中的错误,使它能得出正确的结果。
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。
试题程序: */
#include <stdio.h>
#include <stdlib.h>
typedef struct aa
{ int data;
  struct aa *next;
} NODE;
int fun (NODE *h)
{ int max=-1;
  NODE *p;
/**********ERROR**********/
  p=h->next;
  while(p)
       { if(p->data>max)
             max=p->data;
/**********ERROR**********/
      p=p->next;
       }
  return max;
}
void outresult(int s, FILE *pf)
{ fprintf(pf, "\nThe max in link :%d\n",s);
}
NODE *creatlink(int n, int m)
{ NODE *h,*p,*s;
  int i;
  h=p=(NODE *)malloc(sizeof(NODE));
  h->data=9999;
  for(i=1;i<=n;i++)
    { s=(NODE *) malloc(sizeof(NODE));
      s->data=rand()%m; s->next=p->next;
      p->next=s;  p=p->next;
    }
  p->next=NULL;
  return h;
}
void outlink(NODE *h,FILE *pf)
{ NODE  *p;
  p=h->next;
  fprintf(pf, "\n The LIST :\n\n HEAD");
  while(p)
    { 
fprintf(pf, "->%d",p->data); 
  p=p->next;}
  fprintf(pf, "\n");
}
int main()
{ NODE *head; int m;
  head=creatlink(12,100);
  outlink(head,stdout);
  m=fun(head);
  printf("\nThe RESULT :\n"); 
  outresult(m,stdout);
return 0;
}
