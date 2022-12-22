
int shell_sort(int arr[], int n) {
  int gap, i, j, temp;

  // Start with a big gap, then reduce the gap
  for (gap = n/2; gap > 0; gap /= 2) {
    // Do a gapped insertion sort for this gap size.
    // The first gap elements a[0..gap-1] are already in gapped order
    // keep adding one more element until the entire array insertion
    // is complete
    for (i = gap; i < n; i++) {

      // add a[i] to the elements that have been gap sorted
      for (j = i - gap; j >= 0 && arr[j] > arr[j + gap]; j -= gap) {

	// swap arr[j] and arr[j+gap]
	temp = arr[j];
	arr[j] = arr[j + gap];
	arr[j + gap] = temp;
      }
    }
  }

  return 0;
}
