/*下列给定程序中的函数Creatlink的功能是:创建带头节点的单向链表,并为各节点数据域赋0到m-1的值。 
请改正函数Creatlink中的错误,使它能得出正确的结果。 
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。 
试题程序: */
#include <stdio.h>
#include <stdlib.h>
typedef struct aa
{ int data;
  struct aa *next;
} NODE;

NODE *Creatlink(int n, int m)
{ NODE *h=NULL,*p,*s;
  int i;
  s=(NODE *)malloc(sizeof(NODE));
  h=s;
/**********ERROR**********/
  p=s;
  for(i=1;i<n;i++)
    { s=(NODE *) malloc(sizeof(NODE));
/**********ERROR**********/
      s->data=rand()%m; 
      s->next=p->next;p->next=s;  p=p->next;
    }
  s->next=NULL;
/**********ERROR**********/
  return h;
}
void outlink(NODE *h)
{ NODE  *p;
  p=h->next;
  printf("\n The LIST :\n\n HEAD");
  while(p)
    { printf("->%d",p->data); 
      p=p->next;}
  printf("\n");
}
int main()
{ NODE *head;
  head=Creatlink(8,22);
  outlink(head);
return 0;
}
