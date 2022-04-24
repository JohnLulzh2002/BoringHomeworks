#include<cstdio>
#include<algorithm>
using namespace std;
int a[100005];
int main(){
	int n,m,b,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	scanf("%d",&m);
	while(m--){
		scanf("%d",&b);
		i=lower_bound(a,a+n,b)-a;
		if(i==n)
			printf("%d\n",a[n-1]);
		else if(i==0)
			printf("%d\n",a[0]);
		else if(b*2>a[i]+a[i-1])
			printf("%d\n",a[i]);
		else
			printf("%d\n",a[i-1]);
	}
	return 0;
}