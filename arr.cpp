#include<stdio.h>
int main()
{
	int i,x;
	int a[]={1,5,7,9,78};
	x=sizeof(a)/sizeof(a[0]);
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(a[0]));
	printf("%d\n",x);
	int sum=0;
	for(i=0;i<x;i++)
	sum +=a[i];
	printf("%d",sum);
	return 0;
}
