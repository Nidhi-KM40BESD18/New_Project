#include<stdio.h>
int main()
{
        int n,i,c,j;
        printf("Enter the toatl number\n");
        scanf("%d",&n);
        int a[n];
        printf("Enter the array elements\n");
        for(i=0; i<n; i++)
        {
                scanf("%d",&a[i]);
        }
        printf("After sorting\n");
        for(i=0; i<n; i++)
	{
                for(j=i+1; j<n; j++)
                {
                        if(a[i]>a[j])
                        {
                                c=a[i];
                                a[i]=a[j];
                                a[j]=c;
                        }
                }
        }
        for(i=0; i<n; i++)
        {
                printf("%d ",a[i]);
        }
        printf("\n");
        return 0;
}

