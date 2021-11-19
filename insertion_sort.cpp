//Insertion Sort

#include <iostream>
using namespace std;

void insertionSort(int matrice[], int n) {
  for (int i = 1; i < n; i++) {
    int key = matrice[i];
    int j = i - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<matrice[j] to key>matrice[j].
    while (key < matrice[j] && j >= 0) {
      matrice[j + 1] = matrice[j];
      --j;
    }
    matrice[j + 1] = key;
  }
}

int main()
{
		
	//declaratie
	
	//Citire n
	int n;
	cout << "Introduceti dimensiunea matricei: " ;
	cin >> n;
	
	int matrice[n]; //matrice dinamica
	

	cout << "Matricea inainte de Insertionsort este: " << endl;
	
	for ( int i = 0; i < n; i++) {
		
		cout << "Introduceti elementul " << i+1 << " : ";
		cin >> matrice[i];
	}
	
	insertionSort(matrice, n);
	
	cout << "\n";
	
	cout << "Matricea dupa Insertionsort: ";
	
	for ( int i = 0; i < n; i++) {
		
		cout << matrice[i] << " ";		
	}
	        
}