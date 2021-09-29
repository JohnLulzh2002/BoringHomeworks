#include<stdio.h>
int main(){
	char a[100],b[100],c[200];
	scanf("%s%s",a,b);
	int i=0,j=0,k=0;
	while(a[i]&&b[j]){
		if(a[i]&&a[i]<b[j])
			c[k++]=a[i++];
		else
			c[k++]=b[j++];
	}
	c[k]=0;
	printf(c);
	return 0;
}