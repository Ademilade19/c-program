#include <stdio.h>
#include <string.h>
int main(){
  char str1[50],str2[50];
  printf("enter string to reverse: ");
  gets(str1);

  int counter = 0;

  for (int i = strlen(str1)-1; i >=0; i--){
    str2[counter] = str1[i];
    counter++;
  }
  printf("\nNew string: %s\n", str2);
    return 0;

}