#include <iostream>
#include <stdio.h>
#include <time.h>

#define MAX 49

using namespace std;

int* podaj();
int* losuj();
void sprawdz(int* podane, int* losy);

int main(void) {
    
    srand(time(NULL));
    char input = 'x';

    while (input != 'q') {

        sprawdz(podaj(), losuj());

        cout << "q - zakoncz";
        cin >> input;
        return 0;
    }
}

int* podaj() {
    int* strzaly = new int[6];
    int input = 0;

    cout << "Podaj 6 liczb od 1 - 49." << endl;
    for (int i = 0; i < 6; i++) {
        do {
            cout << "Podaj " << i + 1 << " liczbe: ";
            cin >> input;
        } while (input < 1 || input > MAX);

        strzaly[i] = input;
    }

    return strzaly;
}

int* losuj() {
    int r = 0;
    bool powt;

    int* losy = new int[6];

    // for (int i = 0; i < 6; i++) losy[i] = 0;

    for (int i = 0; i < 6; i++) {
        //losuj dopuki nie będzie:
        do {
            powt = 0; // powtórz
            r = rand();
            // cout << r << endl;

            //w zakresie
            if (r < 1 || r > 49) {
                powt = 1;
                continue;
            }

            //już wylosowana
            for (int j = 0; j < i; i++) {
                if (losy[j] == r) {
                    powt = 1;
                    continue;
                }
            }

        } while (powt);
    }
    return losy;
}


void sprawdz(int* podane, int* losy) {
    int trafy = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (podane[i] == losy[j]) {
                trafy++;
                break;
            }
        }
    }

    //debug 
    for (int i = 0; i < 6; i++) cout << podane[i] << "  " << losy[i] << endl;

    cout << trafy << endl;
    return;
}


