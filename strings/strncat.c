#include<stdio.h>
void strcat1(char s1[], char s2[], int n)
{
        int i,j;
        for(i=0; s1[i]!=0; i++);
        //{
        //}
        s1[i]=' ';
        i++;
        for(j=0; s2[j]!=0; j++)
        {
		if(j<n)
		{
                s1[i]=s2[j];
                i++;
		}
		else
		{
			s1[i]='\0';
			return;
		}
        }
        s1[i]='\0';
        return;
}

int main()
{
	int n=5;
        char s1[50]="hello world",s2[50]="this is me";
        strcat1(s1,s2,n);
        printf("\"%s\"",s1);
        printf("\n");
        return 0;
}
