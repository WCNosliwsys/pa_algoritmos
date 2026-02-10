#include <iostream>
using namespace std;

int particion(int a[], int ini, int fin) {
    int pivot = a[fin];
    int pindex = ini;

    for (int i = ini; i < fin; i++) {
        if (a[i] <= pivot) {
            int temp = a[i];
            a[i] = a[pindex];
            a[pindex] = temp;
            pindex++;
        }
    }

    int temp = a[pindex];
    a[pindex] = a[fin];
    a[fin] = temp;

    return pindex;
}

void quickSort(int a[], int ini, int fin) {
    if (ini < fin) {
        int p = particion(a, ini, fin);
        quickSort(a, ini, p - 1);
        quickSort(a, p + 1, fin);
    }
}

int main() {
    int n;
    cout << "Ingrese n: ";
    cin >> n;

    int a[n];

    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    cout << "Arreglo ordenado:\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}


