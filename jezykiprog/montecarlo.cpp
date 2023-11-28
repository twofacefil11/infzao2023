#include <iostream>
#include <time.h>

using namespace std;

int main(void) {
    srand(time(NULL));

    long p;
    long x, y;
    int dystans;
    long w = 0, poza = 0;

    cout << "Podaj liczbe punkuf: ";
    cin >> p;  

    for (int i = 0; i < p * p; i++) {
        
        x = double(rand() & p + 1 / p);
        y = double(rand() & p + 1 / p);
    
        dystans = x
    }

    return 0;
}