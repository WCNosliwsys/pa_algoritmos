#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high && x >= arr[low] && x <= arr[high]) {

        if (arr[high] == arr[low])
            break;

        int pos = low + ( (double)(x - arr[low]) * (high - low) )
                        / (arr[high] - arr[low]);

        if (arr[pos] == x)
            return pos;

        if (arr[pos] < x)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return -1;
}

int main() {
    int A[10] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10;
    int dato;

    cout << "Dato a buscar: ";
    cin >> dato;

    int posicion = interpolationSearch(A, n, dato);

    if (posicion != -1) {
        cout << "El dato se encontro en la posicion: " << posicion << endl;
    } else {
        cout << "El dato NO se encontro" << endl;
    }

    return 0;
}

