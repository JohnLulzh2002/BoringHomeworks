#include<stdio.h>
#define LEN 255
typedef char str[LEN+1];
int strlen(char* s){
	int i=0;
	for(;s[i];i++);
	return i;
}
int strstr(char* s,char* t){
	int i,j,lt=strlen(t);
	int l=0,r=1,next[LEN+1]={-1};
	for(;t[r];r++){
		if(t[l]==t[r])
			next[r]=l++;
		else{
			l=0;
			next[r]=-1;
		}
	}
	for(i=0,j=0;s[i];i++){
		if(s[i]==t[j])
			j++;
		else
			j=next[j]+1;
		if(j==lt)
			return i-j+2;
	}
	return -1;//can't find
}
int main(){
	str s,t;
	scanf("%s%s",s,t);
	printf("%d",strstr(s,t));
	return 0;
}