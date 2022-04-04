/*3. Determinar si un valor entero es un numero par o impar*/

#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Programa para determinar si un valor ingresado es par o impar" << endl;

    cout << "Ingrese un valor entero: "; cin >> num;
    num % 2 == 0 ? cout << "El numero es par" : cout << "El numero es impar";

    return 0;
};
