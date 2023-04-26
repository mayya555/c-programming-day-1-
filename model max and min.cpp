#include <stdio.h>

int main() {
    int max,i,j, min;
   int arr[5]={5,6,7,8,9};
    max = arr[0];
    min = arr[0];
    for (i = 0; i <=5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("The maximum value in the array is: %d\n", max);
    printf("The minimum value in the array is: %d\n", min);

    return 0;
}