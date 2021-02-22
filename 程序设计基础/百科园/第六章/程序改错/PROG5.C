/*下列给定程序中,函数fun的功能是:在字符串str中找出ASCII码值最大的字符,将其放在第一个位置上,并将该字符前的原字符向后顺序移动。
例如,调用fun函数之前给字符串输入ABCDeFGH,调用后字符串中的内容为eABCDFGH。 
请改正程序中的错误,使它能得出正确的结果。 
注意:不要改动main函数,不得增行或删行,也不得更改程序的结构。 
试题程序: */
#include <stdio.h>
/**********ERROR**********/
void fun(char *p)
{ 
char max, *q;
int i=0;
  max=p[i];
  while (p[i]!=0)
       {if (max<=p[i])
          { 
/**********ERROR**********/
           q = p +i;
max=p[i];
          }
        i++;
       }
/**********ERROR**********/
  while(q>p)
      {*q=*(q-1);
        q--;
       }
  p[0]=max;
}
int main()
{
char str[80];
  printf("Enter a string: "); 
gets(str);
  printf("\nThe original string: "); 
puts(str);
  fun(str);
  printf("\nThe string after moving: ");
puts(str); 
printf("\n\n");
return 0;
}
