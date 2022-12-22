#include<stdio.h>

void quick_sort(int[],int,int);
int partition(int[],int,int);
void quick_sort(int* arr, int low, int high) {
  if (low < high) {
    // partition the array by setting the position of the pivot value
    int pivot = partition(arr, low, high);

    // sort elements before and after partition
    quick_sort(arr, low, pivot - 1);
    quick_sort(arr, pivot+1, high);
  }

}

int partition(int arr[], int low, int high) {
  int pivot = arr[high]; // set pivot to the last element
  // elements less than pivot will be pushed to the left of pIndex
  // elements more than pivot will be pushed to the right of pIndex
  int pIndex = low;

  // each time we finds an element less than or equal to pivot, pIndex
  // is incremented and that element would be placed before the pivot.
  for (int i = low; i < high; i++) {
    if (arr[i] <= pivot) {
      int temp = arr[i];
      arr[i] = arr[pIndex];
      arr[pIndex] = temp;
      pIndex++;
    }
  }

  // swap pIndex with pivot
  // swap(arr[pIndex], arr[high]);
  int temp = arr[pIndex];
  arr[pIndex] = arr[high];
  arr[high] = temp;


  return pIndex;
}
