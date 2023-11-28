#include <iostream>
#include <time.h>

// #define PREC 100000;

using namespace std;

int main(void) {
    srand(time(NULL));

    long PREC = 100000;
    long p;
    long x, y;
    int dystans;
    long w = 0, total = 0;
    double pi;

    cout << "Podaj liczbe punkuf: ";
    cin >> p;  

    for (int i = 0; i < (PREC * PREC); i++) {
        
        x = double(rand() % PREC + 1) / PREC;
        y = double(rand() % PREC + 1) / PREC;
    
        dystans = x * x + y + y;

        if (dystans <= 0)
            w++;
        total++;

        pi = double(4 * w) / total;
    }

    cout << "Masz tu PI: "
    return 0;
}