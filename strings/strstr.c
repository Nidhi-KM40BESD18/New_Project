#include<stdio.h>
int strcmpre( char* s1, char* s2,int i)
{
        int k;
        i++;
        for(k=1; *(s2+k)!=0; k++,i++)
        {
                if(*(s1+i)!=*(s2+k))
                        return 0;
        }
        return 1;
}
int stringstr( char* s1, char* s2)
{
        int i;
        for(i=0; *(s1+i)!=0; i++)
        {
                if(*(s1+i)==*(s2+0))
                        if(strcmpre(s1, s2, i)==1)
                                return i;
        }
        return -1;
}

int main()
{
        int c;
        char s1[50], s2[50];
        printf("Enter String\n");
        scanf("%[^\n]s",s1);
        printf("Enter the string to find in first string\n");
        scanf("%s",s2);
        c=stringstr(s1, s2);
        if(c==-1)
                printf("Not found\n");
        else
                printf("%d\n",c);
        return 0;
}

