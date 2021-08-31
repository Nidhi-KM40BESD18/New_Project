#include<stdio.h>
void reverse_bits(int *n)
{
	int i,j;
	for(i=0, j=(sizeof(*n)*8)-1; i<j; i++,j--)
        {
                if((*n & (1<<j)) != (*n & (1<<i)))
                {
                        //if(*n & (0x01<<i))
                                  //*n |=(0x01 << j);
                                  //*n &=~(0x01<<i);
				      	* n=*n^(1<<i);
					* n=*n^(1<<j);
                                //}
                }
        }
}
int main()
{
	int i,j,temp=0;
	int n;
	printf("Enter an integer\n");
	scanf("%u",&n);
	reverse_bits(&n);
	printf("%u\n",n);
	return 0;
}
