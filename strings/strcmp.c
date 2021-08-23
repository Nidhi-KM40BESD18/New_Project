#include<stdio.h>
int stringcmp(char* s1, char* s2)
{
        int i;
        for(i=0;*(s1+i)!=0 && *(s1+i)-*(s2+i)<0;i++)
        {;
        }
        return -1;

        for(i=0;*(s1+i)!=0 && *(s1+i)-*(s2+i)>0 ;i++)
        {;
        }
        return 1;

        for(i=0;*(s1+i)!=0 && *(s1+i)-*(s2+i)==0;i++)
        {;
        }
    return 0;
}

int main()
{
        int c;
        char s1[]="Ajit",s2[]="Ajeet";
        c=stringcmp(s1,s2);
//      if(c==0)
                printf("%d\n",c);
/*      else if(c==1)
                printf("%s",s1);*/
        return 0;
}

