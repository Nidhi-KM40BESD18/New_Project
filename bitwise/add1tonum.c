#include<stdio.h>
int add1(int n)
{
	n=-(~n);
	return n;
}

int main()
{
	int a;
	printf("Enter a numver\n");
	scanf("%d",&a);
	printf("%d\n",add1(a));
	return 0;
}
