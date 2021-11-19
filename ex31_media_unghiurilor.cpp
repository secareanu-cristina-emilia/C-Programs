/*
Sa se scrie un program C++ care citeste masurile a doua unghiuri exprimate in grade si minute.
Programul afiseaza media celor doua unghiuri, exprimata ca unghi, adica in grade, minute si secunde.
Exemplul 1: 57 20
55 50
se va afisa : 56 35 0
Exemplul 2: 57 21
55 50
se va afisa : 56 35 30
*/


#include <iostream>
using namespace std;

int main()
{
    int grad1,minut1,grad2,minut2,sumaUnghiuri;

	//Se introduc gradele si minutele pentru 2 unghiuri diferite
	cout << "Primul unghi are valorile: " << endl;
	cin >> grad1 >> minut1;
	
	cout << "Al doilea unghi are valorile: " <<endl;
    cin >> grad2 >> minut2;
    
	sumaUnghiuri = g1*60 + m1 + g2*60 + m2;
	
    cout << s/2/60 << " " << s/2%60 << " ";
	
    if( s%2==0 ) cout << 0 ;
	else cout << 30;
    
	return 0;
}