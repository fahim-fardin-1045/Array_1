#include<stdio.h>
#include<string.h>
int main()
{
 //char s1[]= "fahimfardin"; 
 int n;
 char s1[20];
 
 gets (s1); /// taking input form user
 
 int i,len=0; 
 
for (i=0; s1[i]!='\0' ;i++){
  len ++;
}
 
printf ("length = %d",len);

}
