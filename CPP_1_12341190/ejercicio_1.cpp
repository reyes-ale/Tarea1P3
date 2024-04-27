
#include <iostream>
#include <locale>
using namespace std;
int main() {
	int numero;
	do {
		setlocale(LC_ALL, "spanish");
		cout << "Número: ";
		cin >> numero;
		cout << "El número " << numero << " es " << ((numero % 2 == 0) ? ("par.") : ("impar.")) << endl;
	} while (numero != 0);
}


