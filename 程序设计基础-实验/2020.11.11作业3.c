#include<stdio.h>
int main(){
	int i,j,t,s=0;
	for(i=101;i<201;i++){
		t=1;
		for(j=2;j*j<=i;j++)
			if(!(i%j)){
				t=0;
				break;
			}
		if(t)	s++;
	}
	printf("%d",s);
	return 0;
}