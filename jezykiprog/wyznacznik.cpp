#include <iostream>

using namespace std;

int main(void) {

    int size = 3;
    float arr[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Wklep wartość elementu [" << i << "][" << j << "]";
            cin >> arr[i][j];
        }
    }

    for (int i = 0;i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    



    return 0;
}