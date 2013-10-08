/*********************************************************************
Tehtävä: HARJOITUS 14
Tekijä: Pekka Melgin
PVM: 8.10.2013
Kuvaus:
Tee ohjelma, joka kysyy henkilötietosi seuraavasti:
Anna (kaikki) etunimesi (merkkijono):
Anna kengannumero (kokonaisluku):
Anna sukunimi (merkkijono):
Anna koulumatka (reaaliluku):
Anna osoitteesi:
Anna postinumero:

Ohjelma tulostaa tiedot seuraavasti:
sukunimi etunimet
osoite
postinumero
kengannumero ja koulumatka

Käytä C++:n cin- ja cout-olioita ohjelman toteuttamiseen.
*********************************************************************/
#include <iostream>
using namespace std; 
int main() 
{
	char sukunimi[20];
	char etunimet[20];
	char osoite[30];
	int postinumero;
	int kenka;
	float matka;

	cout << "Anna etunimesi :";
	//cin.get();
	cin.get(etunimet, 20);
	cout << "Anna kengännumero :";
	cin >> kenka;
	cout << "Anna sukunimi :";
	cin.get();
	cin.get(sukunimi, 20);
	cout << "Anna koulumatkan pituus :";
	cin >> matka;
	cout << "Anna osoitteesti :";
	cin.get();
	cin.get(osoite, 20);
	cout << "Anna postinumerosi :";
	cin >> postinumero;

	cout <<sukunimi <<" " <<etunimet <<endl <<osoite <<endl << postinumero <<endl <<kenka <<" " <<matka <<endl;
}