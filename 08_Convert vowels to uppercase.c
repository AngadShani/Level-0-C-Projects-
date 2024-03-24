
#include <stdio.h>
#include<string.h>

//Compiler version gcc  6.3.0


void convertTolowercaseVowels(char str[]);

int main() {
  char inputstr[100];
  printf("enter a string: ");
  
  fgets(inputstr, sizeof(inputstr), stdin);
  convertTolowercaseVowels(inputstr);
  printf("String after converting all lowercase vowels to uppercase vowels: %s", inputstr);
  
  return 0;
}


void convertTolowercaseVowels(char str[]) {
  int length = strlen(str);
  
  for(int i=0; i<length; ++i) {
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'  ) {
      str[i] -= 32;
    }
  }
}

  
