#include<stdio.h>
#include<string.h>
int main(){
	int i=0,l,max=0,min=501,a,b;
	char s[501][501];
	while(~scanf("%s",s[i])){
		if((l=strlen(s[i]))>max){
			max=l;
			a=i;
		}
		if(l<min){
			min=l;
			b=i;
		}
		i++;
	}
	printf("%s\n%s",s[a],s[b]);
	return 0;
}