#include <iostream>
using namespace std;

void insercionDirecta(int A[], int n) {
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

void imprimir(int A[], int n) {
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}

int main() {
    int A[] = {9, 3, 7, 1, 5};
    int n = sizeof(A) / sizeof(A[0]);

    insercionDirecta(A, n);
    imprimir(A, n);

    return 0;
}
