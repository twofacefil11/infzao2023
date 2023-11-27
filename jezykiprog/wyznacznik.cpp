#include <iostream>

using namespace std;

int main(void)
{

    int size = 3;

    float arr[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; i < size; i++)
        {
            cout << "Wklep wartość elementu [" << i << "][" << j << "]";
            cin >> arr[i][j];
        }
    }

    return 0;
}