#include<stdio.h>
int littletobig(int a)
{
	a=(a<<24 | a>>24 | (a>>8 & 0x0000FF00) | (a<<8 & 0x00FF0000));
	return a;
}

int main()
{
	int a;
	printf("Enter a number that is to be converted\n");
	scanf("%x",&a);
	
	//a=(a<<24 | a>>24 | (a>>8 & 0x0000FF00) | (a<<8 & 0x00FF0000));
	printf("%x\n",littletobig(a));
	return 0;
}

