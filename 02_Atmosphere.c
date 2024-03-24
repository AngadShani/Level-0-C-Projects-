#include<stdio.h>

int atmosphere(int temp);

int main() {
  int temp;
  printf("enter temperature in celsius: ");
  scanf("%d", &temp);
  printf("%d", atmosphere(temp));
  return 0;
}

int atmosphere(int temp) {
  if (temp <= 15) {
    printf("Atmosphere is cold.");
  }
  else if (temp > 15) {
    printf("Atmosphere is hot.");
  }
  return 0;
}
