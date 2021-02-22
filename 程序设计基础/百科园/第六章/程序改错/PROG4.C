/*下面程序中，函数fun的功能是求两个字符集合的差集，形参s1和s2分别指向的两个字符串代表了两个字符集合s1和s2。注：字符集合s1和s2的差集s1-s2是指在差集中包含的字符均出现在s1中，但未出现在s2中。如输入
s1：good
s2：afternoon
输出：difference is：gd
注意：只能在带标示的注视语句下面一句修改，其他地方不能修改！
*/
#include<stdio.h> 
/**********ERROR**********/
void fun(char *s1,char *s2,char *s3)
{
	int count1,count2,count3=0;
	for(count1=0;s1[count1];count1++)
	{
		for(count2=0;s2[count2];count2++)
		{
			/**********ERROR**********/
			if(s1[count1]==s2[count2])
		    break;
		}
		if(s2[count2]=='\0')
		{
			/**********ERROR**********/
			s3[count3++]=s1[count1];
		}
	}
	s3[count3]=0;
}
int main()
{
	char s1[40]="good",s2[40]="afternoon",s3[40];
	fun(s1,s2,s3);
	/**********ERROR**********/
	if(s3[0])
	  printf("difference is:%s\n",s3);
	else
	  printf("difference is empty\n");
	return 0;
}
