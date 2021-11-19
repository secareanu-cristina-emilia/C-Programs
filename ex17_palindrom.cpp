/* Un numar este palindrom daca se citeaste la fel de la stanga la dreapta ca de la dreapta la stanga.
	Exemple de numere palindrom: 111, 1221, 45654 
*/
#include <iostream>
using namespace std;

int inverseazaNumar(int nr) {
			
		int invers = 0;
		int rest = 0;
		
		while ( nr > 0 ) {
			
			rest = nr % 10;
			invers = ( invers * 10 ) + rest;
			nr = nr / 10;
			
		}
		
		return invers;
}
		
bool verificaPalindrom(int nr) {
			
		int invers = inverseazaNumar(nr);

		if ( invers == nr ) {
		
			return true;
		
		} else {
			
			return false;
			
		}
		
}
		
int main()
{
          
		int nr= 54321;
	
		  
		if ( verificaPalindrom(nr) ) {
			
			cout << "DA";
			
		} else {
			  
			cout << "NU";
			  
		}
}