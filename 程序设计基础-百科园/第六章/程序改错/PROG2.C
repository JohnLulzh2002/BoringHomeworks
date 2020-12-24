/*
函数fun()的功能是将s1和s2两个字符串集合为一个新集合s3，每个字符串在新集合中仅出现一次，函数的返回值是新集合中字符串的个数
例如：s1集合数据为 {"while","for","switch","if","break","continue"}，s2集合数据为 {"for","case","do","else","char","switch"}
合并后的结果为 ：while for switch if break continue case do else char
修改下面程序中的错误，使之运行能得到正确的结果。注：不能更改程序的结构。
*/
#include<stdio.h>
#include<string.h>
#define M 6
#define N 10
int fun(char s1[][10],char s2[][10],char s3[][10],int m,int n)
{
	int i,j,k=0;
	for(i=0;i<m;i++)
      /**********ERROR**********/
		strcpy(s3[k++],s1[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
         /**********ERROR**********/
		  if(!strcmp(s2[i],s1[j]))
				break;
         /**********ERROR**********/
		  if(j==m)
			strcpy(s3[k++],s2[i]);
	}
	return k;
}
int main()
{
	int i,j;
	char s1[M][N]={"while","for","switch","if","break","continue"},s2[M][N]={"for","case","do","else","char","switch"},s3[2*M][N];
      /**********ERROR**********/
	j=fun(s1,s2,s3,6,6);
	for(i=0;i<j;i++)
		printf("%s ",s3[i]);
       printf("\n");
	return 0;
}