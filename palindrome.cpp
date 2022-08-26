#include <stdio.h>
#include <string.h>
int main ()
{
char S1[100];
char RevS1[100];
int i,length;
int count = 1;
scanf("%s",&S1);

int j = 0;
length = strlen(S1);
for( i = length - 1; i >= 0; i--) {
RevS1[j++] = S1[i];
}

for(i=0;i<length;i++){
  if(S1[i] != RevS1[i]){
      printf("not palindrome");
 return 0;
  }
}

  printf("palindrome");

return 0;
}
