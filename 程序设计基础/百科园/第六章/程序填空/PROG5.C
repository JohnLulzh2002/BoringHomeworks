/*下面程序是实现两数的交换，如输入5  9，输出9  5。*/
#include<stdio.h>
void swap(int *p1, int *p2);
int main()
{   
int a,b;
    int *point1,*point2;
/**********FILL**********/
    scanf("%d %d", &a,&b  );
    point1=&a;  point2=&b;
/**********FILL**********/
    swap( &a,&b    );
printf("\n%d,%d\n",a,b);
return 0 ;
}
void swap(int  *p1, int  *p2)
{   int p;
    p=*p1;
/**********FILL**********/
    *p1=*p2 ;
    *p2=p;
}
