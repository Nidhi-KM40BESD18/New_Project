#include<stdio.h>
int power(int a)
{
	int count=0;
	while(a!=0)
        {
                count++;
                a=a & (a-1);
        }
	if(count==1)
                return 1;
        else
		return -1;	
}

int main()
{
	int n,z;
	printf("Enter a to check if it is poweer of 2 or not\n");
	scanf("%d",&n);
	z=power(n);
	if(z==1)
		printf("Poer of 2\n");
	else 
		printf("Not a power of 2\n");
	return 0;
}

