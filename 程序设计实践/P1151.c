#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a,c,d;
		char b[11];
		scanf("%d%s%d",&a,b,&c);
		if(!strcmp(b,"pop"))	d=0*20;
		if(!strcmp(b,"no"))		d=1*20;
		if(!strcmp(b,"zip"))	d=2*20;
		if(!strcmp(b,"zotz"))	d=3*20;
		if(!strcmp(b,"tzec"))	d=4*20;
		if(!strcmp(b,"xul"))	d=5*20;
		if(!strcmp(b,"yoxkin"))	d=6*20;
		if(!strcmp(b,"mol"))	d=7*20;
		if(!strcmp(b,"chen"))	d=8*20;
		if(!strcmp(b,"yax"))	d=9*20;
		if(!strcmp(b,"zac"))	d=10*20;
		if(!strcmp(b,"ceh"))	d=11*20;
		if(!strcmp(b,"mac"))	d=12*20;
		if(!strcmp(b,"kankin"))	d=13*20;
		if(!strcmp(b,"muan"))	d=14*20;
		if(!strcmp(b,"pax"))	d=15*20;
		if(!strcmp(b,"koyab"))	d=16*20;
		if(!strcmp(b,"cumhu"))	d=17*20;
		d+=c*365+a;

		printf("%d ",d%13+1);
		int t=d%20;
		switch(t){
		case 0:		printf("imix");break;
		case 1:		printf("ik");break;
		case 2:		printf("akbal");break;
		case 3:		printf("kan");break;
		case 4:		printf("chicchan");break;
		case 5:		printf("cimi");break;
		case 6:		printf("manik");break;
		case 7:		printf("lamat");break;
		case 8:		printf("muluk");break;
		case 9:		printf("ok");break;
		case 10:	printf("chuen");break;
		case 11:	printf("eb");break;
		case 12:	printf("ben");break;
		case 13:	printf("ix");break;
		case 14:	printf("mem");break;
		case 15:	printf("cib");break;
		case 16:	printf("caban");break;
		case 17:	printf("eznab");break;
		case 18:	printf("canac");break;
		case 19:	printf("ahau");break;
		}
		printf(" %d\n",d/260);
	}
	return 0;
}