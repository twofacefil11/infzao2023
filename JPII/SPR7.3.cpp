#include <iostream>
#include <stdio.h>
#include <time.h> 

using namespace std;

int* podaj();
int* losuj();
void sprawdz(int* podane, int* losy);

int main(void) {
    
    srand(time(NULL));
    char input = 'x';

    while (input != 'q') {

        int* podane = podaj();
        int* wylosowane = losuj();
        sprawdz(podane, wylosowane);

        // debug
        // int* lossy = podaj();
        // for (int i = 0; i < 6; i++) {cout << lossy[i] << endl;}
        
        delete[] podane;
        delete[] wylosowane;

        cout << "q - zakoncz\t";
        cin >> input;
    }

    return 0;
}

int* podaj() {
    int* strzaly = new int[6];
    int input;

    cout << "Podaj 6 liczb od 1 - 49." << endl;
    for (int i = 0; i < 6; i++) {

        input = 0;

        while (input < 1 || input > 49) {

            cout << "Podaj " << i + 1 << " liczbe: ";
            cin >> input;

            //sprawdzenie czy sie powtarza
            for (int j = 0; j < i; j++) {
                if (input == strzaly[j]) {
                    input = 0;
                    break;
                }
            }
        }
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
        powt = true;

        //powtarzaj losowanie dopuki:
        while (powt) {

            powt = false;
            r = rand();

            //r jest poza zakresem
            if (r < 1 || r > 49) {
                powt = true;
                continue;
            }

            //r sie powtarza
            for (int j = 0; j < i; j++) {
                if (losy[j] == r) { 
                    powt = true;
                    break;
                }
            }
        } 
        losy[i] = r;
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
    for (int i = 0; i < 6; i++) cout << podane[i] << " \t" << losy[i] << endl;

    cout << "Trafiles " << trafy << " liczb." << endl;
    return;
}


