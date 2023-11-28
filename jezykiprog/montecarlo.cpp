#include <iostream>
#include <time.h>

using namespace std;

int main(void) {
    srand(time(NULL));

    long p;
    long x, y;
    int dystans;
    long w = 0, total = 0;
    double pi;

    cout << "Podaj liczbe punkuf: ";
    cin >> p;  

    for (int i = 0; i < p * p; i++) {
        
        x = double(rand() & p + 1) / p;
        y = double(rand() & p + 1) / p;
    
        dystans = x * x + y + y;

        if (dystans <= 0)
            w++;
        total++;

        pi = double(4 * w) / total;

        
    }

    return 0;
}