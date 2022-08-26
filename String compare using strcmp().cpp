#include<stdio.h>
#include<string.h>
int main()
{
 char s1[50]= "my name is "; 
 char s2[20]= "fahim fardin"; 
 
 int a=strcmp (s1,s2);
 
 if (a==0){
   printf("equal");
 }
 else{
   printf("not equal");
 }
 
}
