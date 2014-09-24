/*****************
//Tapio Pekkarinen
//Harjoitus 7
//24.9.2014
//Versio 1.0
*/
#include <iostream>
using namespace std;
char nimi[20], osoite[20];//Merkkien määrittely
int paino, pituus, erotus, ihannepaino;//Muuttujat
int main()
{
	cout << "Ohjelma laskee ihannepainosi pituuden perusteella" << "\n";
	cout << "Anna nimesi ";
	cin.get (nimi, 20);
	cin.get();

	cout << "Anna pituutesi ";
	cin >> pituus;
	cin.get();

	cout << "Anna osoitteesi ";
	cin.get(osoite, 20);
	cin.get();

	cout << "Anna painosi ";
	cin >> paino;
	cin.get();

	ihannepaino = pituus - 100;
	erotus = paino - ihannepaino;
	
	cout << "Arvoisa " << nimi 	<< "\n" "osoitteesi on " << osoite << " painosi on " << paino << "kg ihannepainosi on " << ihannepaino << " kg "<< "erotus on " << erotus << " kg" << endl;
	

}