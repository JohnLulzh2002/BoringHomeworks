/*下列给定程序的功能是:读入一个整数2<=k<=10000输出它的所有质因子(即所有为素数的因子)。例如,若输入整数2310,则应输出:2、3、5、7、11。 
请改正程序中的错误,使程序能得出正确的结果。 
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。 试题程序: */
#include  <stdio.h>
/**********ERROR**********/
IsPrime(int n)
{ 
  int i,m;
  m=1;
  for(i=2;i<n;i++)
/**********ERROR**********/
   if(!(n%i))
	{
		m=0;
		break;
	}

  return(m);
}
int main()
{ 
  int j,k;
  printf("\nPlease enter an interger number between 2 and 10000: ");
  scanf("%d",&k);
  printf("\nThe prime factor(s) of %d is(are): ",k);
  for(j=2;j<k;j++)
 	if((!(k%j)) && (IsPrime(j)))
		printf("%4d,",j);
  printf("\n");
return 0;
} 
