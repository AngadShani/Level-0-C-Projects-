#include<stdio.h>

int sumofDigits(int num);

int main() {
  int num;
  printf("enter number: ");
  scanf("%d", &num);
  int sum = sumofDigits(num);
  printf("sum of digits is %d", sum);
}

int sumofDigits(int num) {
  while(num != 0) {
    int num1, num2, sum2;
    int sum = 0;
    num1 = num / 100;
    sum += num1;
    num2 = num - num1*100;
    sum += num2 / 10 + num2 % 10;
    
    if(sum / 10 == 0) {
      return sum;
    }
    else {
      sum2 = sumofDigits(sum);
      return sum2;
    }
    
  }
  return 0;
}
