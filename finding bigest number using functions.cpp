#include <stdio.h>
int big(int a,int b,int c,int d)
{
	if(a>b && a>c &&a>d)
	return a;
	else if (b>a && b>c && b>d)
	return b;
	else if(c>a && c>b && c>d)
	return c;
	else
	return d;
}
int main()
{
	int re=big(12,10,11,40);
	printf("biggest number is:%d",re);
	return 0;
}
