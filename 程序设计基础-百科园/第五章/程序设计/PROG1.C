/*编写程序,实现矩阵(3行、3列)的转置(即行列互换)。 
例如,若输入下面的矩阵: 
100  200  300 
400  500  600 
700  800  900 
则程序输出: 
100  400  700 
200  500  800 
300  600  900 
注意:部分源程序给出如下。 请勿改动main函数和其他函数中的任何内容,仅在函数fun的花括号注释语句中填入所编写的若干语句。 试题程序: */
#include <stdio.h>
void fun (int array[3][3])
{
/************Begin**************/
  int i,j;
  for(i=0;i<3;i++)
	  for(j=i+1;j<3;j++){
		  array[i][j]+=array[j][i];
		  array[j][i]=array[i][j]-array[j][i];
		  array[i][j]-=array[j][i];
	  }
/************End**************/
  
}
int main()
{
  FILE *wf,*in;
  int i,j;
  int array [3][3]={{100,200,300},{400,500,600},{700,800,900}};
  for (i=0;i<3;i++)
     {for (j=0;j<3;j++)
          printf("%7d",array[i][j]);
      printf("\n");
     }
  fun(array);
  printf("Converted array:\n");
  for (i=0;i<3;i++)
     { for (j=0;j<3;j++)
          printf("%7d",array[i][j]);
       printf("\n");
     }   
/******************************/
  in=fopen("in51.dat","r");
  wf=fopen("out51.dat","w");
  for(i=0;i<3;i++)
	  for(j=0;j<3;j++)
		  fscanf(in,"%d",&array[i][j]);
  fun(array);
  for (i=0;i<3;i++)
     { for (j=0;j<3;j++)
          fprintf(wf,"%7d ",array[i][j]);
       fprintf(wf,"\n");
     }   
  fclose(wf);
  fclose(in);
/*****************************/
return 0;
}
