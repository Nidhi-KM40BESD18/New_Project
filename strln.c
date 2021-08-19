#include<stdio.h>
int stringlen(char str[])
{
	int i;
	for(i=0;str[i]!=0;i++)
	{
	}
	return i;
}
int main()
{
	int a;
	char s[50];
	printf("Enter string\n");
	scanf("%[^\n]s",s);
	a=stringlen(s);
	printf("%d\n",a);
	return 0;
}
