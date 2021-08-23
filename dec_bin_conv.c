

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

