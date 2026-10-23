#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int numero, i = 1;

    cout << "Ingrese un número para mostrar su tabla de multiplicar: ";
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << ":" << endl;

    while (i <= 10) {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    }

    return 0;
}