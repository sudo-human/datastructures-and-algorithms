#include "InsertionSort.h"

void InsertionSort(int A[], int n) {
	int j = 1;
	while(j < n) {
		int i = j - 1;
		int k;
		while(A[i+1] < A[i] && i >= 0) {
			k = A[i+1];
			A[i+1] = A[i];
			A[i] = k;
			i--;
		}
		j++;
	}
}

	
