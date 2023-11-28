#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

int main(void) {
    srand(time(NULL));

    long w = 0, total = 0;
    long PREC = 10000;
    unsigned long p; //18446744073709551615 (maxa ale max możliwości to RPEC do kwadratu)
    double dystans;
    double x, y;
    double pi;

    cout << "Podaj liczbe punkuf: ";
    cin >> p;  
    p++;

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
