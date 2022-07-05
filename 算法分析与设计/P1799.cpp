#include<stdio.h>
#include<algorithm>
#include<set>
using namespace std;
typedef pair<long long,long long> Pii;
multiset<Pii> s;
int main(){
	long long n,m,i;
	long long ans=0;
	Pii a;
	scanf("%lld%lld",&n,&m);
	for(i=0;i<n;i++){
		scanf("%lld%lld",&a.first,&a.second);
		if(a.first>a.second){
			a.first+=a.second;
			a.second=a.first-a.second;
			a.first-=a.second;
		}
		s.insert(a);
	}
	for(i=0;i<m&&!s.empty();i++){
		// for(Pii b:s){
		// 	printf("#%lld\t%lld\n",b.first,b.second);
		// }
		// putchar('\n');
		auto t=s.end();
		t--;
		a=*t;
		s.erase(t);
		ans+=a.first*a.first;
		a.second-=a.first;
		if(a.first>a.second){
			a.first+=a.second;
			a.second=a.first-a.second;
			a.first-=a.second;
		}
		if(a.first>0)
			s.insert(a);
	}
	printf("%lld\n",ans);
	return 0;
}