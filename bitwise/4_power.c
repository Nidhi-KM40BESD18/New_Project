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
        int a,n;
        printf("Enter a to check if it is power of 4 or not\n");
        scanf("%d",&a);
	n=a;
        if(power(a)==1)
	{
		int c=0;
                while((n&1)==0)
		{
			c++;
			n=n>>1;
		}
		if(c%2==0)
		{
			printf("Power of 4\n");
		}
		else
                printf("Not a power of 4\n");
	}
        else
                printf("Not a power of 4\n");
        return 0;
}

