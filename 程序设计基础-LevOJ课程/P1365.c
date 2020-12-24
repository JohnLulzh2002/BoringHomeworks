#include<stdio.h>
int a[95001]={};
int main(){
	int n,i,j,max,s;
	while(~scanf("%d",&n)){
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		max=a[0];s=0;
		for(i=0;i<n;i++){
			s+=a[i];
			if(s>max)max=s;
			if(s<0)	s=0;
		}
		printf("%d\n",max);
	}
	return 0;
}