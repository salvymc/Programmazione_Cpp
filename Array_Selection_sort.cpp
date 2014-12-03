/* Selection sort - ordinamento di un array */ 
#include <iostream>
using namespace std;
int main() { 
int vettore[10];
int i;
int j;
int deposito;
int s=0;
for (i=0;i<10;i++) {
	cout << "iserisci un numero: " << endl;
	cin >> vettore[i];
}
for (i=0;i<10;i++){
	for (j=0;j<10;j++){
	   if (vettore[i] < vettore[j]){
		deposito = vettore[i];
		vettore[i] = vettore[j];
		vettore[j] = deposito;
	}   
}
}
if (vettore[i] == 10) {
			cout << "Il tuo Array è stato ordinato: " << endl;
					}
while (s < 10) {
     cout << vettore[s] << "." << endl;
     s++;
     }
}
