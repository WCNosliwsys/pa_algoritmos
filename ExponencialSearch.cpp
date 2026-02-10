#include <iostream>
using namespace std;

int busquedaBinaria(int A[], int izq, int der, int x) {
    while (izq <= der) {
        int medio = (izq + der) / 2;

        if (A[medio] == x)
            return medio;

        if (A[medio] < x)
            izq = medio + 1;
        else
            der = medio - 1;
    }
    return -1;
}

int exponentialSearch(int A[], int n, int x) {
    if (A[0] == x)
        return 0;

    int i = 1;
    while (i < n && A[i] <= x) {
        i = i * 2;
    }

    int izquierda = i / 2;
    int derecha = (i < n) ? i : n - 1;

    return busquedaBinaria(A, izquierda, derecha, x);
}

int main() {
    int A[10] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10;
    int dato;

    cout << "Dato a buscar: ";
    cin >> dato;

    int posicion = exponentialSearch(A, n, dato);

    if (posicion != -1)
        cout << "El dato se encontro en la posicion: " << posicion << endl;
    else
        cout << "El dato NO se encontro" << endl;

    return 0;
}
