#include<stdio.h>

int findlargest(int arr[], int size);

int main() {
  int size;
  printf("enter the size of an array: ");
  scanf("%d", &size);
  
  int array[size];
  
  printf("enter the elements of array: ");
  for(int i=0; i<size; i++) {
    scanf("%d", &array[i]);
  }
  
  int result = findlargest(array, size);
  
  printf("largest number in an array is %d", result);
  
  return 0;
}


int findlargest(int arr[], int size) {
  int largest = arr[0];
  
  for(int i = 1; i<size; i++) {
    if(arr[i] > largest) {
      largest = arr[i];
    }
  }
  return largest;
}