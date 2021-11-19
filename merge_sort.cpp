// Merge sort in C++

#include <iostream>
using namespace std;

// Merge two subarrays L and M into arr
void merge(int matrice[], int p, int q, int r) {
  
  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = matrice[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = matrice[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      matrice[k] = L[i];
      i++;
    } else {
      matrice[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    matrice[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    matrice[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int matrice[], int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(matrice, l, m);
    mergeSort(matrice, m + 1, r);

    // Merge the sorted subarrays
    merge(matrice, l, m, r);
  }
}

int main() {
  int n;
	cout << "Introduceti dimensiunea matricei: " ;
	cin >> n;
	
	int matrice[n]; //matrice dinamica
	

	cout << "Matricea inainte de Mergesort este: " << endl;
	
	for ( int i = 0; i < n; i++) {
		
		cout << "Introduceti elementul " << i+1 << " : ";
		cin >> matrice[i];
	}
	cout << endl;
	
	 mergeSort(matrice, 0, n - 1);
	 
	 cout << "Matricea dupa Mergesort este: " << endl;
		
		for ( int i = 0; i < n; i++) {
			
			cout << matrice[i] << " ";
			
		}

  return 0;
}