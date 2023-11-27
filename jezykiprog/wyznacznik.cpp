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

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 

    float dl, dr;
    int offset = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

        }
    }


    //for evry row iterate twice
        //once to add multiplies of diagonalsj to right
            //to do thatjust have an inside loop that adds one every time to te rows
            //for exciding rows, just subtract the size from its index and all gonna be fine;
        //once to subtract multiples fo diagonals to left

//or can i make it in one loop for both diagonals ?
    return 0;
}