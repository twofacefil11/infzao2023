#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n);

int main() {
    int choice, a, n;
    char fin = 'n';
    while (fin != 't') {
        cout << "co cheszc obliczyc? 1. potega, 2.silnia" << endl;
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Podaj podstawe:";
                cin >> a;
                cout << "podaj wykladnik:";
                cin >> n;
                cout << a << "^" << n << " = " << pow(a, n) << endl;
                break;

            case 2:
                cout << "podaj n:";
                cin >> n;
                cout << factorial(n) << endl;
                break;

            default:
                cout << "nie wybrano operacji" << endl;
                break;
        }

        cout << "zakonczyc? t-tak" << endl;
        cin >> fin;
    }
    
    return 0;
}


int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
