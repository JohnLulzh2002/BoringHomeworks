#include<stdio.h>
int main(){
	int i=1,j,k;
	for(;i<10;i++)
		for(j=0;j<10;j++)
			for(k=0;k<10;k++)
				if(i*i*i+j*j*j+k*k*k==100*i+10*j+k)
					printf("%d%d%d\n",i,j,k);
	return 0;
}
