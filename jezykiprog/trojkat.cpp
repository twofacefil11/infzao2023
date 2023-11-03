#include <iostream>

using namespace std;

int main() {

    float a, b, c;

    cout << "Podaj dugosci bokuf: " << endl;
    cout << "bok a: ";
    cin >> a; 
    cout << "bok b: ";
    cin >> b; 
    cout << "bok c: ";
    cin >> c; 

    cout << ((a + c > b && a + b > c && b + c > a) ? "Jest trujkont" : "Nie ma trujkonta") << endl;

    return 0;
}