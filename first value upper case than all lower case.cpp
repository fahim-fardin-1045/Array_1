#include<stdio.h>
#include<string.h>
int main()
{
 char s1[30];
 gets(s1);
 
 int len;
 len = strlen(s1);
 int i;
  for(i=0;i<len-1;i++)
    {
        if(s1[0]>='a' && s1[0]<= 'z')

        {
            s1[0]= s1[i]-32;
        }
        else if (s1[i]>='A' && s1[i]<= 'Z'){
           s1[i]= s1[i]+32;
        }
    }
  printf(s1);
}
