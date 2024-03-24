#include <iostream>
#include <stdio.h>
#include <time.h>

double SequentialSearchStatistics(int max, int length);

void wypisz(int* arr, int n);
void TestSearch(FILE* file);

int SequentialSeatch(int* arr, int n, int s);
int LosujIndeks(int len);
int* randomTable(int n);


int main() {
    FILE *output = fopen("wyszukiwanie.dat", "w");

    if (output == NULL) {
        std::cout << "Nie udalo sie otworzyc pliku!";
        return 1;
    }

    srand((unsigned int)time(NULL));    

    TestSearch(output);
    fclose(output);

    std::cout << "finito" << std::endl;

    return 0;

}


int* randomTable(int n) {
    int* arr = new int[n];

    for (int i = 0; i < n; i++)
        arr[i] = rand();
    return arr;
}


void wypisz(int* arr, int n) {
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << std::endl;
    return;
}


int SequentialSeatch(int* arr, int n, int s) {
    //s - search
    for (int i = 0; i < n; i++)
        if (arr[i] == s)
            return i + 1;
    std::cout << "ups, -1" << std::endl;
    return -1;
}


int LosujIndeks(int len) {
    
    int r; // r - random
    
    do r = rand();
    while (r < 0 || len <= r);
    
    return r;
}


double SequentialSearchStatistics(int max, int length) {

    int sum = 0;
    
    for (int i = 0; i < max; i++) {
        int* table = randomTable(length);
        //wypisz(table, length);
        int index = LosujIndeks(length);
        sum += SequentialSeatch(table, length, table[index]);
        delete[] table;
    }

    return (double)sum / max;
}


void TestSearch(FILE* file) {

    double sredna = 0;

    fprintf(file, "rozmiar tablicy\tśrednia liczba porównań\n");
    
    for (int i = 10; i < 1001; i += 10) {
        sredna = SequentialSearchStatistics(100, i);
        fprintf(file, "%i\t%f\n", i, sredna);
    }

    return;
}