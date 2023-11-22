#include <iostream>

using namespace std;

int main() {
    char guess[20];
    char wyraz[20];
    int proby = 0;
    int len = 0;
    int j = 0;
    bool dobrze = 0;
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
        for (int i = 0; i != j; i++) {
            cout << wyraz[i];
        }
        cout << "\nZgaduj: ";
        cin >> guess;

        j++;

        for (int x = 0; wyraz[x] == guess[x]; x++) {
            if (x == len) {
                dobrze = 1;
                break;
            }
        }
    }

    cout << "Zgadles!!! w " << proby << " probach.";
    return 0;
}
