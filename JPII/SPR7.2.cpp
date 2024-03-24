#include <iostream>

using namespace std;

int* podaj(int* n);
float policz(int* arr, int n);
void wypisz(int* arr, float avarage, int n);

int main() {

    int n = 0;
    int* arr = podaj(&n);
    float avarage = policz(arr, n);
    wypisz(arr, avarage, n);

    delete[] arr;
    return 0;

}

int* podaj(int* n) {
    int* arr = new int[10];
    char quit = 's';

    for (int i = 0; i < 10; i++) {

        cout << "Podaj " << i << " liczbe: ";
        cin >> arr[i];

        cout << "Przerwac wprowadzanie? t/T - TAK: ";
        cin >> quit;
        if (quit == 't' || quit == 'T') {
            *n = i;
            return arr;
        }
    }
    return arr;
}

float policz(int* arr, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) 
        sum += arr[i];
    
    return (float)sum / (n + 1);
}


void wypisz(int* arr, float avarage, int n) {
    for (int i = 0; i < n; i++) {
        if (i != 0)
            cout << ", ";
        cout << arr[i];
    }

    cout << " -- srednia = " << avarage << endl;
    return;
}