#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minPos = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minPos])
                minPos = j;
        }

        int tmp = a[i];
        a[i] = a[minPos];
        a[minPos] = tmp;
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

    selectionSort(a, n);
    imprimir(a, n);

    return 0;
}
