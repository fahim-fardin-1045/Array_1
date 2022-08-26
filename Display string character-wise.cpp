#include<stdio.h>
int main()
{
 char s1[]= "fahim"; 
 
 int i=0;  /// starting index
 
 while (s1[i] != '\0') /// loop will continue until the char is null
 {
   
   printf ("%c\n",s1[i]);
   
   i++;  /// update 
   
 }
 
  return 0;
}
