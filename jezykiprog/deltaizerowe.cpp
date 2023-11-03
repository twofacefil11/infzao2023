#include <iostream>
#include <math.h>

using namespace std;

int main() {

    float a, b, c;
    float delta;

    cout << "Podaj wartosci, b i c dla: f(x) = ax^2 + bx + c " << endl;
    cout << "bok a: ";
    cin >> a; 
    cout << "bok b: ";
    cin >> b; 
    cout << "bok c: ";
    cin >> c; 

    delta = (b * b) -(4 * a * c);
    if (delta > 0)
        cout << endl << "Delta = " << delta << endl << "x1 = " << (-b - sqrt(delta)) / (2 * a) << endl << "x2 = " << (-b + sqrt(delta)) / (2 * a) << endl;
    else if (delta == 0)
        cout << "Delta = " << delta << endl << "x0 = " << -(b / 2 * a) << endl;
    else
        cout << "Nie ma rozionzan";
    return 0;
}