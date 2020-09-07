#include<stdio.h>

int *fun(int *,int *);
void main( )    //函数的返回值为指针（函数返回的地址值可以是变量的地址、指针变量或数组的首地址等）
{
    int *p,i,j;
	scanf("%d%d",&i,&j);
	p =fun(&i,&j);
	printf("i=%d,j=%d,*p=%d\n",i,j,*p);
}
int *fun(int *a,int *b)
{
    if (*a>*b) return a;
	else return b;
}