/*给定程序中,函数fun的功能是:将形参std所指结构体数组中年龄最大者的数据作为函数值返回,并在main函数中输出。
注意:部分源程序给出如下。
请勿改动main函数和其他函数中的任何内容,仅在函数fun的横线上填入所编写的若干表达式或语句。 
试题程序: */
#include  <stdio.h>
typedef struct
{
  char name[10];
  int age;
}STD;
STD fun(STD std[],int n)
{
  STD max;
  int i;
/**********FILL**********/
  max=*std;
  for(i=1;i<n;i++){
/**********FILL**********/
   	if(max.age<std[i].age)
		max=std[i];}
  return max;
}
int main()
{ 
  STD std[5]={"aaa",17,"bbb",16,"ccc",18,"eee",15};
  STD max;
  max=fun(std,5);
  printf("\nThe result is: \n ");
/**********FILL**********/
  printf("\nName :%s,Age :%d\n",max.name,max.age);
return 0;
}
