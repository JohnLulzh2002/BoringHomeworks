#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int num,age;
	char name[8],sex;
	double grade;
}student;
const size_t stuSize=sizeof(student);
int main(){
	int n,i,j;
	student *p[20],*t;
	freopen("9.2.in","r",stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		p[i]=malloc(stuSize);
		scanf("%d%s %c%d%lf",&p[i]->num,
			p[i]->name,&p[i]->sex,
			&p[i]->age,&p[i]->grade);
	}
	printf("Before:\n");
	for(i=0;i<n;i++)
		printf("%d	%s	%c	%d	%.2f\n",p[i]->num,
			p[i]->name,p[i]->sex,
			p[i]->age,p[i]->grade);
	for(i=1;i<n;i++)
		for(j=1;j<n-i;j++)
			if(p[j-1]->grade>p[j]->grade){
				t=p[j-1];
				p[j-1]=p[j];
				p[j]=t;
			}
	printf("\nAfter:\n");
	for(i=0;i<n;i++)
		printf("%d	%s	%c	%d	%.2f\n",p[i]->num,
			p[i]->name,p[i]->sex,
			p[i]->age,p[i]->grade);
	return 0;
}