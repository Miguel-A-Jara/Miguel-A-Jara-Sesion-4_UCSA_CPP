/*4. Determinar si un valor digitado por el usuario es un positivo o negativo.*/

#include <iostream>
using namespace std;

int main(){
    float num;

    cout << "Programa para determinar si un valor ingresado es positivo o negativo" << endl;

    cout << "Ingrese un valor: "; cin >> num;

    if(num == 0){

        cout << "El numero ingresado es neutro.";
    } else {

        num > 0 ? cout << "El numero es positivo." : cout << "El numero es negativo.";
    }

    return 0;
};

