#include<stdio.h>
void stringcopy(char s1[], char s2[], int n)
{
        int i;
        for(i=0;s2[i]!=0;i++)
        {
		if(i < n)
		{
                	s1[i]=s2[i];
		}
		else
		{
			s1[i] = '\0';
			return;
		}
        }
}

int main()
{
	int n = 2;
        char s1[]="orange",s3[]="nidhi";
        stringcopy(s1,s3,n);
        printf("%s\n",s1);
        return 0;
}
