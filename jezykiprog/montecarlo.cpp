#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

int main(void) {
    srand(time(NULL));

    long w = 0, total = 0;
    long PREC = 10000;
    unsigned long p;
    double dystans;
    double x, y;
    double pi;

    cout << "Podaj liczbe punkuf: ";
    cin >> p;  
    p++;

    if (p > PREC * PREC)
        p = PREC * PREC;

    for (unsigned long i = 0; i < p; i++) {
        
        x = double(rand() % (PREC + 1)) / PREC;
        y = double(rand() % (PREC + 1)) / PREC;

        dystans = x * x + y * y;

        if (dystans <= 1.0)
            w++;
        total++;

    }
    pi = double(4 * w) / total;
    cout << "Masz tu PI: " << pi << endl;


    return 0;
}
