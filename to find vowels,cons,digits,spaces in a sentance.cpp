#include <stdio.h>
int main()
{
	char a[100];
	int i,v=0,d=0,c=0,s=0;
	scanf("%[^\n]s", a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		v++;
		else if(a[i]>='0'&& a[i]<='9')
		d++;
		else if(a[i]==' ')
		s++;
		else
		c++;
	}
	printf("vowels are:%d\nconstants are:%d\ndigits are:%d\nspaces are:%d\n",v,c,d,s);
	return 0;
}
