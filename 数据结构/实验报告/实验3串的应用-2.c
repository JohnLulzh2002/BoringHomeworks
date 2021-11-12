#include<stdio.h>
#define LEN 255
typedef char str[LEN+1];
int strlen(char* s){
	int i=0;
	for(;s[i];i++);
	return i;
}
int strstr(char* s,char* t){
	int i=0,j,l=strlen(t);
	for(;s[i+l];i++){
		int f=1;
		for(j=0;t[j];j++)
			if(s[i+j]!=t[j]){
				f=0;
				break;
			}
		if(f)return i+1;
	}
	return -1;//can't find
}
int main(){
	str s,t;
	scanf("%s%s",s,t);
	printf("%d",strstr(s,t));
	return 0;
}