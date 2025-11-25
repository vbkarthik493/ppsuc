#include <stdio.h>
#include<string.h>
int main()
{
	char a[10]="cse",b [10]="ADITYA";
	printf("a=cse\t");
	printf("b= ADITYA\n");
	printf("a string length is:%d\n", strlen(a));
	printf("a string reverse is:%s\n", strrev(a));
	printf("a string uppercase is:%s\n", strupr(a));
	printf("b string lowercase is:%s\n", strlwr(b));
	printf("a string copy is:%s\n", strcpy(a,b));
	printf("a string concat is:%s\n", strcat(a,b));
	printf("a string compare is:%d", strcmp(a,b));
	return 0;
	
}
