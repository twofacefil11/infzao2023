#include <iostream>

using namespace std;

float sredniaHarmoniczna();

int main() {

    cout << sredniaHarmoniczna() << endl;
    return 0;
}

float sredniaHarmoniczna() {

    int x = 1, y = 1;

    while (x != 0 && y != 0) {
        cout << "Przynajmniej jedna liczba musi być 0" << endl;
        cout << "Podaj pierszą liczbę: ";
        cin >> x;
        cout << "Podaj drugą liczbę: ";
        cin >> y;
    }
    return (float)(2 * x * y) / (x + y);
}
