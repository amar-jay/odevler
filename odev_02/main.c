#include <stdio.h>
#include "quick_sort.c"
#include "shell_sort.c"

int main() {
  int n = 10, arr[n], low, high;

  printf("Enter %d elements: ", n);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  low = 0;
  high = n - 1;

  shell_sort(arr, high);

  printf("Sorted array: ");
  for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

  return 0;
}
