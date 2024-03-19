#include <stdio.h>

int findMax(int arr[], int index, int current_max) {
  if (index == sizeof(arr) / sizeof(arr[0])) {
    return current_max;
  }

  return findMax(arr, index + 1, current_max > arr[index] ? current_max : arr[index]);
}

int main() {
  int arr[100]; 
  int n;

  printf("Enter the number of elements (less than 100): ");
  scanf("%d", &n);

  printf("Enter array elements: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int max_element = findMax(arr, 0, arr[0]); 

  printf("The maximum element in the array is: %d\n", max_element);

  return 0;
}

}