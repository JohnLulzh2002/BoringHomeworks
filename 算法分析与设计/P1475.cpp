#include<cstdio>
#include<set>
#include<algorithm>
using namespace std;
typedef pair<int,int> pii;
int main(){
	int m,n,i,j,s;
	while(~scanf("%d%d",&m,&n)){
		pii a[505];
		multiset<int,greater<int>> b;
		b.clear();
		s=0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i].first);
		for(i=0;i<n;i++)
			scanf("%d",&a[i].second);
		sort(a,a+n,greater<pii>());
		i=0;
		for(j=n;j;j--){
			for(;a[i].first>=j;i++)
				b.insert(a[i].second);
			if(!b.empty())
				b.erase(b.begin());
		}
		for(auto j:b)
			m-=j;
		printf("%d\n",m);
	}
	return 0;
}