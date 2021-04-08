#include<stdio.h>
int b;
int dec(int n){
	int ans=0,w=1;
	while(n){
		ans+=w*(n%10);
		n/=10;
		w*=b;
	}
	return ans;
}
void maxdit(int n){
	while(n){
		if(n%10>b)b=n%10;
		n/=10;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int p,q,r;
		scanf("%d%d%d",&p,&q,&r);
		b=2;
		maxdit(p);
		maxdit(q);
		maxdit(r);
		for(b++;b<17;b++){
			int w=1,pp=dec(p),qq=dec(q),rr=dec(r);
			if(pp*qq==rr){
				printf("%d\n",b);
				break;
			}
		}
		if(b==17)printf("0\n");
	}
	return 0;
}