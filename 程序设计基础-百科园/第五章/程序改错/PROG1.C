/*下列给定程序中,函数fun的功能是:求出数组中最大数和次最大数,并把最大数和a[0]中的数对调、次最大数和 a[1] 中的数对调。 
请改正程序中的错误,使它能得出正确的结果。 
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。 
    试题程序:*/
#include<stdio.h>
#define  N   20
/**********ERROR**********/
void fun(int a[],int n)
{
 int  i,  m, t, k;
 for(i=0; i<n;i++)
   {
/**********ERROR**********/
    m=i;
    for(k=i+1; k<n; k++)
      if(a[k]>a[m])
         m=k;
    t=a[i];
    a[i]=a[m];
    a[m]=t;
   }
}
int main()
{ 
  int b[N]={11,5,12,0,3,6,9,7,10,8},n=10,i;
  for(i=0; i<n; i++)  
    printf("%d ",b[i]);
  printf("\n");
  fun(b,n);
  for(i=0; i<n; i++)  
    printf("%d ", b[i]);
  printf("\n");
return 0;
}
