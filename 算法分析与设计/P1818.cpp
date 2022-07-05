#include<stdio.h>
#include<algorithm>
using namespace std;
int s[200005];
int main(){
	int n,q,i,t=0,a;
	scanf("%d%d",&n,&q);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		s[i]=t+=a;
	}
	for(i=0;i<q;i++){
		scanf("%d",&a);
		int*b=lower_bound(s,s+n,a);
		printf("%d ",b-s+1);
	}
	return 0;
}