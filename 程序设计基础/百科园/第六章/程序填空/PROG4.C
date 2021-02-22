/*请补充函数fun,该函数的功能是:在字符串的最前端加入n个*号,形成新串,并且覆盖。注意:字符串的长度最长允许为79。
注意:部分源程序给出如下。请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编若干表达式或语句。
试题程序: */
#include  <stdlib.h>
#include  <stdio.h>
#include  <string.h>
void fun(char s[],int n)  
{
 char a[80],*p;
 int i;
/**********FILL**********/
 p=s;   
 for(i=0;i<n;i++)  a[i]= '*';
 do 
{
/**********FILL**********/
a[i]=*p++;
    i++;
/**********FILL**********/
 }while(*p);
 a[i]=0;
 strcpy(s,a);
}
int main()
{
int n;char s[80];
printf("\nEnter a string: ");gets(s);
 printf("\nThe string:%s\n",s);
 printf("\nEnter n (number of*):");
 scanf("%d",&n);
 fun(s,n);
 printf("\nThe string after inster:%s\n",s);
return 0;
}
