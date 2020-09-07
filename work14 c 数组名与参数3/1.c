#include<stdio.h>
void main( )
{
	int a[3][3]={{1,2,3},{4,5,6}};
	printf("%d\n",a);
	printf("%d\n",a[0]);
	printf("%d\n",*(a+0));
	printf("%d\n",*a);

	printf("%d\n",a+1);
	printf("%d\n",&a[1]);
	printf("%d\n",a[1]);
	printf("%d\n",*(a+1));

	printf("%d\n",a[1]+2);
	printf("%d\n",*(a+1)+2);
	printf("%d\n",&a[1][2]);

	printf("%d\n",*(a[1]+2));
	printf("%d\n",*(*(a+1)+2));
	printf("%d\n",a[1][2]);
}
