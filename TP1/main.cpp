//
// Created by josef on 22/12/2023.
//

#include "P1.h"
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese el primer sumando ";
    cin >> a;
    cout << "Ingrese el segundo sumando ";
    cin >> b;

    // Llamando a la función sumar de la clase P1
    c = P1::sumar(a, b);

    cout << "Resultado " << c << endl;
    return 0;
}
