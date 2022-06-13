#include<cstdio>
#include<algorithm>
using namespace std;
int a[1002],b[1002],c[1002],d[1002];
typedef long long ll;
ll l[1000002],r[1000002];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i,j;
		scanf("%d",&n);
		ll ans=0;
		for(i=0;i<n;i++)
			scanf("%d%d%d%d",a+i,b+i,c+i,d+i);
		for(i=0;i<n;i++)for(j=0;j<n;j++){
			l[i*n+j]=a[i]+b[j];
			r[i*n+j]=-c[i]-d[j];
		}
		sort(l,l+n*n);
		sort(r,r+n*n);
		for(i=j=0;i<n*n&&j<n*n;){
			if(l[i]<r[j])
				i++;
			else if(l[i]>r[j])
				j++;
			else{
				ll lc=0,rc=0;
				while(l[i+lc]==r[j]&&i+lc<n*n)
					lc++;
				while(l[i]==r[j+rc]&&j+rc<n*n)
					rc++;
				ans+=lc*rc;
				i+=lc;
				j+=rc;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}