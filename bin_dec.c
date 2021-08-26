#include<stdio.h>
int main()
{
	int dec_no=0, base=1, rem, num;
	printf("Enter the binary number\n");
	scanf("%d",&num);
	while(num > 0)
	{
		rem = num%10;
		dec_no = dec_no + rem*base;
		num = num/10;
		base = base*2;
	}
	printf("Decimal of the given number is: %d\n",dec_no);
	return 0;
}
