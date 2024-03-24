#include<stdio.h>
#include<math.h>

float squareRoot(float n);

int main() {
  int n;
  printf("enter number: ");
  scanf("%d", &n);
  printf("square root is: %f", squareRoot(n));
  return 0;
}

float squareRoot(float n) {
  
  return sqrt(n);
}
