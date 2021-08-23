#include<stdio.h>
int stringchar( char* s, char c)
{
        int i;
        for(i=0; *(s+i)!=0; i++)
        {
                if(*(s+i)==c)
                        return i;
        }
        return -1;
}

int main()
{
        int a;
        char c;
        char s1[]="Hello";
        printf("Enter the character to search:");
        scanf(" %c",&c);
        a=stringchar(s1,c);
        printf("%d\n",a);
        return 0;
}

