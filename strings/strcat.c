#include<stdio.h>
char* strcat1(char* s1, char* s2)
{
        int i,j;
        for(i=0; *(s1+i)!=0; i++);
        //s1[i]=' ';
        //i++;
        for(j=0; *(s2+j)!=0; j++)
        {
                *(s1+i)=*(s2+j);
                i++;
        }
        *(s1+i)='\0';
        return s1;
}
      
int main()
{
        char s1[10]="hello ",s2[10]="world";
        strcat1(s1,s2);
        printf("\"%s\"",s1);
        printf("\n");
        return 0;
}

