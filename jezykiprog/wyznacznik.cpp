#include <iostream>

using namespace std;

int main(void) {

    int size = 3;
    int len = size - 1;
    float arr[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Wklep wartocs elementu [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 

    float dl = 1 , dr = 1;
    float wyznaczik = 0;
    int offset = 0;

    for (int i = 0; i < size; i++, offset = 0, dr = 1, dl = 1) {
        for (int j = 0; j < size; j++, offset++) {
            if (i + offset == size) offset = -i;
            dr *= arr[j][i + offset];
            dl *= arr[i][len - offset];
            cout << i + offset << " " << len - offset << endl;
        }
        wyznaczik = wyznaczik + dr - dl;
    }

    cout << "Wyznaczik = " << wyznaczik << endl;

    //  0,0  0,1  0,2 | 0,0  0,1  0,2 | 0,0  0,1  0,2
    //  1,0  1,1  1,2 | 1,0  1,1  1,2 | 1,0  1,1  1,2
    //  2,0  2,1  2,2 | 2,0  2,1  2,2 | 2,0  2,1  2,2
    return 0;
}