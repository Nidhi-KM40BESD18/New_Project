#include<stdio.h>
int odd_even(int a)
{
    if(a & 1)
        return -1;
    else
  	return 1;
}
int main()
{
    int num;
    printf("Enter  number\n");
    scanf("%d", &num);
    if(odd_even(num)==-1)
    {
        printf("%d is odd\n", num);
    }
    else
    {
        printf("%d is even\n", num);
    }
    return 0;
}
