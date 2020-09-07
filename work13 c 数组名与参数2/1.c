#include<stdio.h>		

//在C语言中，用数组名作为函数调用时的实参，实际上传递给形参的是实参数组的首地址
int tmp1(int p[],int q)    //形参p为数组名,q为元素个数
{
	int i,j,m,l;
	m = (q-1)/2;
	for ( i=0; i<=m; i++)
	{
		j = q-1-i;
		l = p[i];
		p[i]=p[j];
		p[j]=l;

	}	
}

int tmp2(int *p,int q)
{
	int i,m,*j,*l;
    m = (q-1)/2;
	for (i=0; i<=m; i++)
	{
	 j=q-1-i;
	 l=p;
	 p=j;
	 j=l;
	}
}
void main( )    //用数组名或指针作参数将数组倒序排列
{
	int i;
	int a[10]={1,2,3,4,5,6};
	printf("原数组为：");
	for (i=0;i<6;i++)
	printf("%d ",a[i]);
	printf("\n");
	printf("倒叙数组为：");
    tmp2(a,6);
	for ( i=0; i<6; i++)
	{
	printf("%d ",a[i]);	 
	}
}