/*N个有序整数数列已放在一维数组中,给定下列程序中,函数fun 的功能是:利用折半查找算法查找整数m在数组中的位置。
若找到,则返回其下标值;反之,则返回-1。请改正程序中的错误,使它能得出正确的结果。 
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。     试题程序: */
#include  <stdio.h>
#define  N  10
int fun(int *x,int m,int n)
{ int low=0,high=n-1,mid;
/**********ERROR**********/
  while(low<=high)
      {  mid=(low+high)/2;
         if(m<*(x+mid))
/**********ERROR**********/
             high=mid-1;
         else if(m>*(x+mid))
/**********ERROR**********/
             low=mid+1;
         else  return(mid);
      }
 return(-1);
}
int main()
{  int i,a[N]={-3,4,7,9,13,24,67,89,100,180},k,m;
   printf("a数组中的数据如下:");
   for(i=0;i<N;i++)
	   printf("%d ",a[i]);
   printf("Enter m: "); 
   scanf("%d",&m);
   k=fun(a,m,N);
   if (k>=0) 
	   printf("m=%d,index=%d\n",m,k);
   else 
	   printf("Not be found!\n");
return 0;
}
