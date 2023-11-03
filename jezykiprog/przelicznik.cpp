#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int choice;
    float other, pln;
    string waluta;

    cout << "co cie interesuje ? " << endl;
    cout << "1. przelicznik zlote ---> dolary\n2. przelicznik zlote ---> euro\n3. przelicznik zlote ---> funty" << endl;

    cin >> choice;
    
    switch (choice) {
        case 1:
            other = 4.18;
            waluta = " dolary";
            break;
        case 2:
            other = 4.46;
            waluta = " euro";
            break;
        case 3:
            other = 5.12;
            waluta = " funty";
            break;
        default:
            cout << "nie wybrano operacji";
            return 1;
    }

    cout << "Kurs" << waluta << " to " << other << endl;
    cout << "Podaj kwote w pln ktora chesz przeliczyc na" << waluta << ": ";
    cin >> pln;
    cout << fixed << setprecision(2) << pln * other << waluta;

    return 0;
}