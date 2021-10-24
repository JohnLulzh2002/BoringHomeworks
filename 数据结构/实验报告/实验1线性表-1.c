#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int *base,len,size;
} List;
int cmp(const void*a,const void*b){
	return *(int*)a-*(int*)b;
}
void showList(List a){
	int i,*p=a.base;
	for(i=0;i<a.len;i++)
		printf("%d ",*(p++));
	printf("\n");
}
List mergeList(List a,List b){
	List c;
	c.len=a.len+b.len;
	c.size=a.size+b.size;
	c.base=malloc(c.size);
	int i,j,*p=a.base,*q=b.base,*r=c.base;
	for(i=0,j=0;i<a.len||j<b.len;r++){
		if(i==a.len){
			*r=*(q++);
			j++;
		}else if(j==b.len){
			*r=*(p++);
			i++;
		}else if(*p<*q){
			*r=*(p++);
			i++;
		}
		else{
			*r=*(q++);
			j++;
		}
	}
	return c;
}
int main(){
	srand(1);
	List a,b;
	a.len=10;
	a.size=10*sizeof(a.len);
	a.base=malloc(a.size);
	int i;
	for(i=0;i<10;i++)
		(a.base)[i]=rand();
	qsort(a.base,a.len,sizeof(int),cmp);
	showList(a);
	b.len=10;
	b.size=10*sizeof(b.len);
	b.base=malloc(b.size);
	for(i=0;i<10;i++)
		(b.base)[i]=rand();
	qsort(b.base,b.len,sizeof(int),cmp);
	showList(b);

	List c=mergeList(a,b);
	showList(c);
	return 0;
}