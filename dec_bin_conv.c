/*#include<stdio.h>
int main()
{
	char a,b,c,d,e,f;
	printf("Enter a single digit for a,b,c:");
	scanf("%c%c%c",&a,&b,&c);
	d=a+b+c;
	e=a;
	f=b;
	a=d-(a+c);
	b=d-(b+e);
	c=d-(c+f);
	printf("%c%c%c",a,b,c);
	return 0;
}*/

#include<stdio.h>
int main()
{
        int i,temp;
        int x;
        temp= sizeof(x);
        printf("Enter a number\n");
        scanf("%d",&x);
        for(i=0; i<temp*8; i++)
        {
                if(x & 0x80000000)
                        printf("1");
                else
                        printf("0");
                x=x << 1;
        }
        printf("\n");
        return 0;
}

