#include <iostream>

using namespace std;

int main() {
    char yn;
    int g = 64, power = 32, count = 1;
    cout << "zapisz liczbe od 1 do 128 na kartce" << endl;

    while (count != 8) {
        cout << "Czy liczba > " << g << " ?" << "   | " << count << endl;
        cin >> yn;

        if (yn == 'n')
            g -= power;   
        else if (yn == 't')
            g += power + (count == 7); 

        power /= 2;
        count++;
    }
    cout << "Jest to liczba " << g << endl;
    cout << "Zgadlem w " << count - 1 << " probach" << endl;

    return 0;
}
