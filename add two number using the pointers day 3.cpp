#include<stdio.h>
int main()
{
	int a,b,*p,*q,sum=0;
	printf("enter a and b value:");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	sum=*p+*q;
	printf("the sum is %d",sum);
	return 0;
}