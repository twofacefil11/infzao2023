#include <iostream>

using namespace std;

int fill_array(double* arr, int n);

int main() {

    return 0;
}

int fill_array(double* arr, int n) {
    for (int i = 0; i < n; i++) {
    cout << "Podaj " << i + 1 << " liczbe: ";
    cin >> arr[i];

    }

}