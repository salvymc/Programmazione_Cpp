/*Calcola l'area del triangolo*/
#include <iostream>
using namespace std;
int main()
{
float base;
float altezza;
float area_triangolo;
float divisore = 2;
cout << "Inserisci la base e premi invio: ";
cin >> base;
cout << endl;

cout <<"Inserisci l'Altezza: ";
cin >> altezza;
cout << endl;

area_triangolo = base * altezza / divisore; 
cout << "L'area del triangolo è " << area_triangolo << endl ;

}
