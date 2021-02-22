/*下列给定程序中,函数fun的功能是:找出100到n(不大于1000)之间三个位上的数字都相等的所有整数,
把这些整数放在s所指的数组中,个数作为函数值返回。请改正函数fun中的错误,使它能得出正确的结果。 
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。 试题程序: */
#include  <stdio.h>
#define  N  100
int  fun(int s[], int  n)
{ 
int i,j,k,a,b,c;
  j=0;
  for(i=100; i<n; i++) 
     {
/**********ERROR**********/
      k=i;  
      a=k%10;  
      k/=10;   
/**********ERROR**********/
      b=k%10;  
      c=k/10;  
      if(a==b && a==c) 
        s[j++]=i;
     }
  return  j;
}
int main()
{  
 int  a[N], n,num=0, i;
 do
  {
   printf("\nEnter  n(<=1000) :");  
   scanf("%d",&n); 
  } 
 while(n > 1000);
/**********ERROR**********/
 num=fun(a,n);
 printf("\n\nThe result :\n");
 for(i=0; i<num; i++) 
   printf("%5d",a[i]);
 printf("\n\n");
return 0;
}