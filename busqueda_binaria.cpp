#include <iostream>
using namespace std;

int busquedaBinaria(int arreglo[], int tamano, int dato) {
    int izquierda = 0;
    int derecha = tamano - 1;

    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2;

        if (arreglo[medio] == dato) {
            return medio;
        }
        else if (dato > arreglo[medio]) {
            izquierda = medio + 1;
        }
        else {
            derecha = medio - 1;
        }
    }

    return -1;
}

int main() {
    int A[10] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10;
    int dato;

    cout << "Dato a buscar: ";
    cin >> dato;

    int posicion = busquedaBinaria(A, n, dato);

    if (posicion != -1) {
        cout << "El dato se encontro en la posicion: " << posicion << endl;
    } else {
        cout << "El dato NO se encontro" << endl;
    }

    return 0;
}
