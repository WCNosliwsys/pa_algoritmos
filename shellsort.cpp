#include <iostream>
using namespace std;

void shellSort(int A[], int n) {
    int k = n + 1;

    while (k > 1) {
        k = k / 2;

        for (int i = k; i < n; i++) {
            int aux = A[i];
            int j = i;

            while (j - k >= 0 && A[j - k] > aux) {
                A[j] = A[j - k];
                j = j - k;
            }

            A[j] = aux;
        }
    }
}

void imprimir(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int a[] = {9, 3, 7, 1, 5};
    int n = sizeof(a) / sizeof(a[0]);

    shellSort(a, n);
    imprimir(a, n);

    return 0;
}
