#include <iostream>
using namespace std;

int obtenerMaximo(int arreglo[], int tamano) {
    int maximo = arreglo[0];
    for (int i = 1; i < tamano; i++)
        if (arreglo[i] > maximo)
            maximo = arreglo[i];
    return maximo;
}

void countingPorDigito(int arreglo[], int tamano, int exponente) {
    int salida[tamano];
    int conteo[10];

    for (int i = 0; i < 10; i++)
        conteo[i] = 0;

    for (int i = 0; i < tamano; i++)
        conteo[(arreglo[i] / exponente) % 10]++;

    for (int i = 1; i < 10; i++)
        conteo[i] += conteo[i - 1];

    for (int i = tamano - 1; i >= 0; i--) {
        int digito = (arreglo[i] / exponente) % 10;
        salida[conteo[digito] - 1] = arreglo[i];
        conteo[digito]--;
    }

    for (int i = 0; i < tamano; i++)
        arreglo[i] = salida[i];
}

void radixSort(int arreglo[], int tamano) {
    int maximo = obtenerMaximo(arreglo, tamano);
    for (int exponente = 1; maximo / exponente > 0; exponente *= 10)
        countingPorDigito(arreglo, tamano, exponente);
}

int main() {
    int tamano;
    cout << "Ingrese n: ";
    cin >> tamano;

    int arreglo[tamano];
    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < tamano; i++)
        cin >> arreglo[i];

    radixSort(arreglo, tamano);
 	cout << "Arreglo ordenado:\n";
    for (int i = 0; i < tamano; i++)
        cout << arreglo[i] << " ";

    return 0;
}
