#include <iostream>

using namespace std;

int main() {

    char wyraz[20];
    int len = 0;
    
    cout << "Podaj jakiś wyraz: ";
    cin >> wyraz;

    while (wyraz[len] != "\0")
        len++;
    
    

    system("cls");

}