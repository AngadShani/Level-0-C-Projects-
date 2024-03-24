#include<stdio.h>
#include<string.h>

void removeSpaces(char str[]) {
  int length = strlen(str);
  int i, j;
  
  for(i=0, j=0; i<length; ++i ) {
    if(str[i] != ' ') {
      str[j++] = str[i];
    }
  }
  str[j] = '\0';
}


int main() {
  char inputstr[100];
  
  printf("enter a string: ");
  fgets(inputstr, sizeof(inputstr), stdin);
  
  removeSpaces(inputstr);
  printf("String after removing spaces: %s", inputstr);
  
  return 0;
}

  
  