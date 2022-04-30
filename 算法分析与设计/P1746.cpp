#include<cstdio>
#include<algorithm>
using namespace std;
int a[100005];
int main(){
	int n,m,b,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	while(m--){
		scanf("%d",&b);
		i=upper_bound(a,a+n,b)-a;
		if(i>0)
			printf("%d\n",a[i-1]);
		else
			printf("-1\n");
	}
	return 0;
}