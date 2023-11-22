#include <iostream>

using namespace std;

int main() {

    char wyraz[20];
    char guess[20];

    bool dobrze = 0;
    int proby = 0;
    int len = 0;
    int j = 0;

    cout << "Podaj jakis wyraz (max 20 liter): ";
    cin >> wyraz;

    while (wyraz[len] != '\0') 
        len++;

    system("cls");

    while (dobrze == 0) {

        if (proby == len) {
            cout << "Nie udalo ci sie zgadnonc. Wyraz to: " << wyraz << endl;
            return 0;
        }

        proby++;

        cout << "Wraz ma " << len << " liter. Wskazowka: ";

        for (int i = 0; i < j; i++)
            cout << wyraz[i];

        cout << "\nZgaduj: ";
        cin >> guess;

        for (int x = 0; wyraz[x] == guess[x]; x++) {
            if (x > j) {
                j = x;
                cout << "\nCoraz blizej!\n";
            }
            if (x == len) {
                dobrze = 1;
                break;
            }
        j++;
        }
    }

    cout << "Zgadles!!! w " << proby << " probach.";
    return 0;
}
