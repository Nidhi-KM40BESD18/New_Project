#include<stdio.h>
char* stringcopy(char* s1, char* s2)
{
        int i;
        for(i=0;*(s2+i)!=0;i++)
        {
                *(s1+i)=*(s2+i);
        }
        *(s1+i)='\0';
	return s1;
}

int main()
{
        char s1[]="orange",s3[]="delhi";
        stringcopy(s1,s3);
        printf("%s\n",s1);
        return 0;
}

