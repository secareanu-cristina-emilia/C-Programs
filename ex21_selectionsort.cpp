/* 
	Selectionsort cauta cel mai mic element al matricei si il pune la locul lui. 
*/
#include <iostream>
using namespace std;

void selectionSort(int matrice[], int n) {
		
	int index;
	int celmaimic;
	
	for ( int i = 0; i < n; i++) {
		
		index = i;
		for ( int j = i + 1; j < n; j++) {
			
			if ( matrice[j] <= matrice[index]) {
				
				index = j;
				
			}
		}
		
		celmaimic = matrice[index];
		matrice[index] = matrice[i];
		matrice[i] = celmaimic;
		
		for ( int i = 0; i < n; i++) {
			
			cout << matrice[i] <<  " ";
			
		}
		
		cout << endl << endl;
	}
}
	
int main()
{
		
		//declaratie
		
		//Citire n
		int n;
		cout << "Introduceti dimensiunea matricei: " ;
		cin >> n;
	
		int matrice[n]; // matrice dinamica

		cout << "Matricea inainte de Selectionsort este: " << endl;
		
		for ( int i = 0; i < n; i++) {
			
		cout << "Introduceti elementul " << i+1 << " : ";
		cin >> matrice[i];
			
		}
		cout << endl;
		
		selectionSort(matrice, n);
		
		
       	cout << "Matricea dupa Selectionsort este: " << endl;
		
			
		for ( int i = 0; i < n; i++) {
			
			cout << matrice[i] << " ";
			
		}
		
}

