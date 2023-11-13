#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
    char fin = 'n';
    int choice;
    float a[2], b[2];
    cout << "Oblczam 1-suma, 2-dlugosci, 3-iloczyn skalarny" << endl;
    
    while (fin == 'n' || fin == 'N') {
        
        for (int i = 0; i < 2; i++) {
            cout << "Podaj wspolrzedne wektora a[" << i << "]: ";
            cin >> a[i];
        }

        for (int i = 0; i < 2; i++) {
            cout << "Podaj wspolrzedne wektora b[" << i << "]: ";
            cin >> b[i];
        }
        
        cout << "Co chcesz obliczyc? 1- suma, 2-dlugosci, 3-iloczyn sklalarny:" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Suma wektorów a + b" << endl;
                for (int i = 0; i < 2; i++)
                    cout << "c[" << i << "] = " << a[i] + b[i] << endl; 
                break;

            case 2:
                cout << "dlugosc a = " << sqrt(a[0] * a[0] + a[1] * a[1]) << endl;
                cout << "dlugosc b = " << sqrt(b[0] * b[0] + b[1] * b[1]) << endl;
                break;
            case 3:
                cout << "iloczyn skalarny = " << a[0] * b[0] + a[1] * b[1] << endl;
                break;
            default:
                cout << "Nie wybrano operacji" << endl;
                break;
        }
        cout << "Czy chcesz zakoncy? t/T -tak; n/N -nie" << endl;
        cin >> fin;
        while (fin != 't' || fin != 'T' || fin != 'n' || fin != 'N') {
            cout << "Czy chcesz zakoncy? t/T -tak; n/N -nie" << endl;
            cin >> fin;

        }
    }
    cout << "fin" << endl;
    return 0;
}