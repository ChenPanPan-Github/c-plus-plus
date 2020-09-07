#include<stdio.h>

/*void main( )              //下标法
{  
    int i,a[10]={0,1,2,3,4,5,6,7,8,9};
	for (i=0;i<10;i++)
		printf ("%d ",a[i]);
		printf ("\n");

}

void main( )
{
    int i,*p;
	int a[10]={0,1,2,3,4,5,6,7,8,9};//指针法
    p=&a;	//这里&a和a都可用，前者是数组首地址，后者为地址值;
	for (i=0;i<10;i++)
		printf ("%d ",*(a+i));
		printf ("\n");
}*/

void main( )
{
    int i,*p;
    int a[10]={0,1,2,3,4,5,6,7,8,9};
	for (p=a;p<(a+10);p++)
		printf ("%d ",*p);    //数组的实际地址相差4，但操作以1计算（系统自动进行了一步除4操作）
	    printf ("\n");
}