#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void llenarAleatorio(int a[], int n, int maxVal) {
    for (int i = 0; i < n; i++) {
        a[i] = rand() % maxVal;
    }
}

void copiarArreglo(int src[], int dst[], int n) {
    for (int i = 0; i < n; i++)
        dst[i] = src[i];
}

void insertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int aux = A[i];
        int k = i - 1;

        while (k >= 0 && aux < A[k]) {
            A[k + 1] = A[k];
            k = k - 1;
        }
        A[k + 1] = aux;
    }
}

void mostrarArreglo(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
// clock_t inicio = clock();
// clock_t fin = clock();
// double ms = 1000.0 * (fin - inicio) / CLOCKS_PER_SEC;
int main() {
    srand(time(NULL));
    int n;
    cout << "Ingrese n: ";
    cin >> n;

    int *base = new int[n];
    int *a = new int[n];

    insertionSort(a, n);

    return 0;
}
