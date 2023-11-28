// #include <iostream>
// #include <time.h>

// using namespace std;

// int main(void) {
//     srand(time(NULL));

//     long PREC = 100000;
//     long p;
//     long x, y;
//     long dystans;
//     long w = 0, total = 0;
//     double pi;

//     cout << "Podaj liczbe punkuf: ";
//     cin >> p;  
//     p++;

//     for (int i = 0; i < p; i++) {
        
//         x = double(rand() % PREC + 1) / PREC;
//         y = double(rand() % PREC + 1) / PREC;
    
//         dystans = x * x + y * y;

//         if (dystans <= 1)
//             w++;
//         total++;

//     }
//     pi = double(4 * w) / total;

//     cout << "Masz tu PI: " << pi << endl;
//     return 0;
#include <iostream>
#include <ctime>

using namespace std;

int main(void) {
    srand(time(NULL));

    const long PREC = 100000;
    long p;
    long x, y;
    int dystans;
    long w = 0, total = 0;
    double pi;

    cout << "Podaj liczbe punktow: ";
    cin >> p;  
    p++;

    for (int i = 0; i < p; i++) {
        x = double(rand() % PREC + 1) / PREC;
        y = double(rand() % PREC + 1) / PREC;
    
        dystans = x * x + y * y;

        if (dystans <= 1) // Corrected condition
            w++;
        total++;
    }

    pi = double(4 * w) / total;

    cout << "Masz tu PI: " << pi << endl;
    return 0;
}
