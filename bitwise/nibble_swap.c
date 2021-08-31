#include<stdio.h>
int nibbleswap(int a);
int main()
{
	int a;
	printf("Enter the number\n");
	scanf("%x",&a);
	//a = ((a>>4) & 0x0F | (a<<4) & 0xF0);
	printf("%x\n",nibbleswap(a));
	return 0;
}

int nibbleswap(int a)
{
	a = ((a>>4) & 0x0F | (a<<4) & 0xF0);
	return a;
}
