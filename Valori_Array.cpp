/*Dato un array di dimensione [10],il programa permette di assegnare i valori*/
#include <iostream>
using namespace std;
int main() 
{
int V1[10];
int i;
for (i=0;i<10;i++) {
	cout << "Inserisci un numero " << endl;
	cin  >> V1[i];
	}
if (i == 10) { 
   i = 0;
   cout << endl;
}	
while (i < 10) {
	cout << V1[i] <<".";
	i++;
	}
}
