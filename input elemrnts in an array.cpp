#include <stdio.h>

void reverseArray(int *arr, int size);

int main() {
  int size;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Before reversing the array:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  reverseArray(arr, size);

  printf("\nAfter reversing the array:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

void reverseArray(int *arr, int size) {
  int *start = arr;
  int *end = arr + size - 1;
  while (start < end) {
    int temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}