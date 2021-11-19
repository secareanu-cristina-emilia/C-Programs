/* Bubblesort (sau Sinkingsort) e cel mai simplu algoritm de sortare. 
   Sortarea se realizeaza prin comparatia elementului curent cu fiecare element al matricei.   
*/
#include <iostream>
using namespace std;

void bubbleSort(int matrice[], int n) {
		
	
	int t = 0;
	
	for ( int i = 0; i <= n; i++) {
		for ( int j = 1; j <= n; j++) {
			
			if ( matrice[j-1] > matrice[j]) {
				
				t = matrice[j-1];
				matrice[j-1] = matrice[j];
				matrice[j] = t;
				
			}
		}
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
	

	cout << "Matricea inainte de Bubblesort este: " << endl;
	
	for ( int i = 0; i < n; i++) {
		
		cout << "Introduceti elementul " << i+1 << " : ";
		cin >> matrice[i];
	}
	
	bubbleSort(matrice, n);
	
	cout << "\n";
	
	cout << "Matricea dupa Bubblesort: ";
	
	for ( int i = 0; i < n; i++) {
		
		cout << matrice[i] << " ";		
	}
	        
}