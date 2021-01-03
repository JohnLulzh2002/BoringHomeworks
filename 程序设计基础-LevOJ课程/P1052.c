#include<stdio.h>
int main(){
	int a,b;
	while(~scanf("%d%d",&a,&b))
		switch(b){
			case 2:
				if(a%4==0&&a%100)
					printf("29\n");
				else printf("28\n");
				break;
			case 4:	//fall through
			case 6:
			case 9:
			case 11:
				printf("30\n");
				break;
			default:
				printf("31\n");
		}
	return 0;
}