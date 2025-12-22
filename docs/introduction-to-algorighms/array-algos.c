#include <stdio.h>

int min(int arr[], int len) {
  int min = arr[0];
  for (size_t i = 0; i < len; i++)
    if (arr[i] < arr[min])
      min = i;
  return arr[min];
}

int max(int arr[], int len) {
  int min = arr[0];
  for (size_t i = 0; i < len; i++)
    if (arr[i] > arr[min])
      min = i;
  return arr[min];
}

static inline int avg(int arr[], int len) {
  return (double)sum(arr, len) / (double)len;
}
int main() {}
