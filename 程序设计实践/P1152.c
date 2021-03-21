#include<stdio.h>
#include<string.h>
double table(char*s){
	if(!strcmp(s,"UTC"))	return 0.0;
	if(!strcmp(s,"GMT"))	return 0.0;
	if(!strcmp(s,"BST"))	return 1.0;
	if(!strcmp(s,"IST"))	return 1.0;
	if(!strcmp(s,"WET"))	return 0.0;
	if(!strcmp(s,"WEST"))	return 1.0;
	if(!strcmp(s,"CET"))	return 1.0;
	if(!strcmp(s,"CEST"))	return 2.0;
	if(!strcmp(s,"EET"))	return 2.0;
	if(!strcmp(s,"EEST"))	return 3.0;
	if(!strcmp(s,"MSK"))	return 3.0;
	if(!strcmp(s,"MSD"))	return 4.0;
	if(!strcmp(s,"AST"))	return -4.0;
	if(!strcmp(s,"ADT"))	return -3.0;
	if(!strcmp(s,"NST"))	return -3.5;
	if(!strcmp(s,"NDT"))	return -2.5;
	if(!strcmp(s,"EST"))	return -5.0;
	if(!strcmp(s,"EDT"))	return -4.0;
	if(!strcmp(s,"CST"))	return -6.0;
	if(!strcmp(s,"CDT"))	return -5.0;
	if(!strcmp(s,"MST"))	return -7.0;
	if(!strcmp(s,"MDT"))	return -6.0;
	if(!strcmp(s,"PST"))	return -8.0;
	if(!strcmp(s,"PDT"))	return -7.0;
	if(!strcmp(s,"HST"))	return -10.0;
	if(!strcmp(s,"AKST"))	return -9.0;
	if(!strcmp(s,"AKDT"))	return -8.0;
	if(!strcmp(s,"AEST"))	return 10.0;
	if(!strcmp(s,"AEDT"))	return 11.0;
	if(!strcmp(s,"ACST"))	return 9.5;
	if(!strcmp(s,"ACDT"))	return 10.5;
	if(!strcmp(s,"AWST"))	return 8.0;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		char s[11],a[5],b[5];
		int t,i;
		scanf("%s",s);
		if(s[0]=='n')
			t=12*60;
		else if(s[0]=='m')
			t=24*60;
		else{
			if(s[1]==':')
				t=(s[0]-'0')*60+(s[2]-'0')*10+(s[3]-'0');
			else
				t=((s[0]-'0')*10+(s[1]-'0'))*60
					+(s[3]-'0')*10+(s[4]-'0');
			if(t/60==12)t-=12*60;
			scanf("%s",s);
			if(s[0]=='p')t+=12*60;
		}
		scanf("%s%s",a,b);
		t+=(int)((table(b)-table(a))*60);
		if(t<=0)t+=24*60;
		if(t>24*60)t-=24*60;

		if(t==12*60)
			printf("noon\n");
		else if(t==24*60)
			printf("midnight\n");
		else{
			// printf("*%d	%d\n",t/60,t%60);
			char ss[6];
			strcpy(ss,"a.m.");
			if(t>=12*60){
				t-=12*60;
				ss[0]='p';
			}
			if(t<60)
				t+=12*60;
			printf("%d:%d %s\n",t/60,t%60,ss);
		}
	}
	return 0;
}