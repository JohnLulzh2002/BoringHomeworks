/*请补充函数fun,该函数的功能是:建立一个带头结点的单向链表并输出到文件"out70.dat"和屏幕上,
各结点的值为对应的下标,链表的结点数及输出的文件名作为参数传入。注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。
试题程序: */
#include <stdio.h>
#include <stdlib.h>
typedef struct ss
{
	 int data;
	 struct ss *next;
}NODE;
void fun(int n,char*filename)
{
	 NODE *h,*p,*s;
	 FILE *pf;
	 int i;
	 h=p=(NODE *)malloc(sizeof(NODE));
	 h->data=0;
	 for(i=1;i<n;i++)
	 {
		s=(NODE *)malloc (sizeof (NODE));
/**********FILL**********/
		s->data=i;
/**********FILL**********/
		p->next=s;
/**********FILL**********/
		p=s;
	 }
	 p->next=NULL;
	 if((pf=fopen(filename,"w"))==NULL)
	 {
		printf("Can not open out98.dat!");
		exit(0);
	 }
	 p=h;
	 fprintf(pf,"\n***THE LIST***\n");
	 printf("\n***THE LIST***\n");
	 while(p)
	 {
		fprintf(pf,"%3d",p->data);
		printf("%3d",p->data);
		if(p->next!=NULL)
		{
			fprintf(pf,"->");
			printf("->");
		}
		p=p->next;
	 }
	 fprintf(pf,"\n");
	 printf("\n");
	 fclose(pf);
	 p=h;
	 while(p)
	 {
		s=p;
		p=p->next;
		free(s);
	 }
}
int main()
{
	 char *filename="out98.dat";
	 int n;
	 printf("\nInput n:");
	 scanf("%d",&n);
	 fun(n,filename);
return 0;
}
