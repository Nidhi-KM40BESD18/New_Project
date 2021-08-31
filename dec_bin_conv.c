
#include<stdio.h>
void dec_bin(int *x)
{
	int i;
	for(i=0; i<(sizeof(*x))*8; i++)
        {
                if(*x & 0x80000000)
                        printf("1");
                else
                        printf("0");
                *x=*x << 1;
        }

}
int main()
{
        int i,temp;
        int x;
        temp= sizeof(x);
        printf("Enter a number\n");
        scanf("%u",&x);
	if(x >= 0)
	{
	dec_bin(&x);
        printf("\n");
	}
	else
	{
		int z;
		x=(-x);
		z= ~x;
		z += 1;
		dec_bin(&z);
		printf("\n");
	}
        return 0;
}

