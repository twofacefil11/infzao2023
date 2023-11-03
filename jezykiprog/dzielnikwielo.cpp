#include <iostream>

using namespace std;

int gcd(int a, int b);

int main() {
    int a, b, meh;
    char fin = 'n';

    while (fin != 't') {
        cout << "podaj 1 liczbe: ";
        cin >> a;
        cout << "podaj 2 liczbe: ";
        cin >> b;
        meh = gcd(min(a, b), max(a, b));
        cout << "najwiekszy wspolny dzielnik: " << meh << endl;
        cout << "najmniejsza wspolna wielokrotnosc: " << a * b / meh << endl;
        cout << "zakoncyc? t-tak" << endl;
        cin >> fin;
    }
    return 0;
}


int gcd(int a, int b) {
    while (a % b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return b;
}