#include<stdio.h>
int main()
{
 char s1[20]; /// size 
 
 printf("enter your name");
 
 //scanf ("%s",&s1);/// takeing intput from user   
                  /// only take input befor space 
 
 gets (s1);  /// for taking input after space 
 
 
printf ("name = %s\n",s1);  /// printing string 
  
  return 0;
}
