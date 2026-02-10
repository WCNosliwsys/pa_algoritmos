#include <iostream>
#include <cmath>

using namespace std;

int jumpSearch(int A[], int n, int x) {
    int step = sqrt(n);
    int prev = 0;

    while (prev < n && A[min(step, n) - 1] < x) {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }

    while (prev < n && A[prev] < x) {
        prev++;
        if (prev == min(step, n))
            return -1;
    }

    if (prev < n && A[prev] == x)
        return prev;

    return -1;
}

int main() {
    int A[10] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10;
    int dato;

    cout << "Dato a buscar: ";
    cin >> dato;

    int posicion = jumpSearch(A, n, dato);

    if (posicion != -1) {
        cout << "El dato se encontro en la posicion: " << posicion << endl;
    } else {
        cout << "El dato NO se encontro" << endl;
    }

    return 0;
}


