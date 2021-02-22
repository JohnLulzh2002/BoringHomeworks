#include<stdio.h>
int main(){
	int s;
	char g;
	while(1){
		printf("Input the score:");
		if(scanf("%d",&s)-1)
			return 0;
		if(s<0||s>100){
			printf("Improper score\n");
			continue;
		}
		switch(s/10){
			case 10:
			case 9:g='A';break;
			case 8:g='B';break;
			case 7:g='C';break;
			case 6:g='D';break;
			default:g='E';
		}
		printf("Score:%d	Grade:%c\n",s,g);
	}
	return 0;
}
