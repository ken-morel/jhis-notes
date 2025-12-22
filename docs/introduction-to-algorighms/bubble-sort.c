#include <stdio.h>

int main() {
  int i, j, temp;
  int S = 5, A[S];
  for (i = 0; i < S; i++) {
    printf("Enter #%d) ", i+1);
    scanf("%d", &A[i]);
  }
  for (i = 0; i < S; i++) {
    for (j = 0; j < S - i - 1; j++) {
      if (A[j] > A[j + 1]) {
        temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }
  for(i = 0;i < S;i++) {
    printf("%d\t", A[i]);
  }
  return 0;
}
