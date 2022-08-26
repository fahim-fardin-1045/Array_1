#include<stdio.h>
#include<string.h>
int main()
{
 char s1[50]= "My name is "; 
 char s2[20]= "fahim fardin"; 
 
 int i,j,len=0;
 
for (i=0; s1[i]!='\0' ;i++){
  len ++;
}
for (j=0; s1[j]!='\0' ;j++){
  s1[len +j] = s2[j];
}
 
printf ("%s",s1);

}
