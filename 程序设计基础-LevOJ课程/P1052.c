#include<stdio.h>
int main(){
	int a,b;
	while(~scanf("%d%d",&a,&b)){
		switch(b){
			case 2:
				if(a%4==0&&a%100)
					printf("29");
				else printf("28");
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				printf("30");
				break;
			default:
				printf("31");
		}
		printf("\n");
	}
	return 0;
}