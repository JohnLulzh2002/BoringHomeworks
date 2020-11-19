#include<stdio.h>
int func (int ,int);
int main ( )
{	int k=4,m=1,p1,p2;
	p1=func(k,m) ; 
	p2=func(k,m) ;
	printf("%d,%d\n",p1,p2) ;
	return 0;
}
int func (int a,int b)
{   static int m=0,i=2;
    i+=m+1;
    m=i+a+b;
    return (m);
}
