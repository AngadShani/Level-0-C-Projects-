
#include <stdio.h>

int isprime(int numb) {
  if (numb <= 1) {
    return 0;
  }
  
  for(int i = 2; i <= numb/2 + 1; ++i) {
    if (numb % i == 0) {
      return 0;
    }
    else {
      return 1;
    }
  }
}

int main() {
  int numb;
  printf("enter number: ");
  scanf("%d", &numb);
  
  if (isprime(numb)) {
    printf("%d is a prime number.\n", numb);
  }
  else {
    printf("%d is not a prime number.\n", numb);
  }
  return 0;
  
}
  

  

