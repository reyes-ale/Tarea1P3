
#include <iostream>
#include <locale>
using namespace std;

int main()
{
    int numero;
    int mayor=0;
    int contador=0; 
    setlocale(LC_ALL, "spanish");
    cout << "Ingrese un n�mero: ";
    cin >> numero;
     
    while (contador < 9) {
        if (numero > mayor) {
            mayor = numero;
        }
        cout << "Ingrese otro n�mero: ";
        cin >> numero;
        contador++;
    }

    if (numero > mayor) {
        mayor = numero;
    }

    cout << endl;
    cout << "El mayor es " << mayor;
    cout << endl;



}

