#include<stdio.h>
int negative(int n);
int main()
{
	int a,c;
	printf("Enter a number\n");
	scanf("%d",&a);
	c=negative(a);
	if(c==1)
		printf("Negative\n");
	else 
	printf("Positive\n");
	return 0;
		
}

int negative(int n)
{
	if((1&(n>>31))==1)
		return 1;
	else if((1&(n>>31))==0)
		return -1;
}
