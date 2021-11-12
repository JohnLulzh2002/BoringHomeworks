#include<stdio.h>
#define LEN 255
typedef char str[LEN+1];
void strcat(char* a,char* b){
	int l,i;
	for(l=0;a[l];l++);
	for(i=0;b[i];i++)
		a[l+i]=b[i];
	a[l+i]=0;
}
int main(){
	str s,sp;
	scanf("%s%s",s,sp);
	strcat(s,sp);
	printf(s);
	return 0;
}