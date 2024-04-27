
#include <iostream>
#include <locale>
using namespace std;

int main() {
    int numero;
    setlocale(LC_ALL, "spanish");
    cout << "Ingrese un número de 5 digitos: ";
    cin >> numero; 

    while (numero < 10000 || numero > 99999) {
        cout << "Ingrese un número de 5 digitos: ";
        cin >> numero;
    }
    int potenciadeDiez = 10000;

    for ( int i = 0; i < 5; i++) {
        int digito = numero / potenciadeDiez;
        digito = digito % 10; 
        cout << digito << "   ";
        potenciadeDiez = potenciadeDiez / 10;
    }
    cout << endl; 
    
}
