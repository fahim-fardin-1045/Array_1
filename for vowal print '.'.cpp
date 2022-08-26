#include<stdio.h>
#include<string.h>
int main()
{
 char s1[20]="fahim fardin";
 int len;
 len = strlen(s1);
 int i;
 for (i=0; i<len-1 ;i++){
if(s1[i]=='a'|| s1[i]=='A'||s1[i]=='e'||s1[i]=='E'|| s1[i]=='i'|| s1[i]=='I'|| s1[i]=='o'|| s1[i]=='O'|| s1[i]=='u'|| s1[i]=='U'){
printf(".");
}
 else {
   printf("%c",s1[i]);
 }
}
}
