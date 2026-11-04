#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define NUM 5

void fillMatrix(int u[][NUM], int n);
void displayMatrix(int u[][NUM], int n);
int findMinInRow(int u[][NUM], int n, int row);
void shiftRowLeft(int u[][NUM], int n, int row, int k);

int main() {
    int arr[NUM][NUM];
    int rowNumber, rowIndex, minVal;

    srand((unsigned)time(NULL));

    fillMatrix(arr, NUM);
    cout << "Вихідна матриця (" << NUM << "x" << NUM << "):" << endl;
    displayMatrix(arr, NUM);

    cout << "\nВведіть номер рядку для обробки (1-" << NUM << "): ";
    cin >> rowNumber;

    if (rowNumber < 1 || rowNumber > NUM) {
        cout << "Некоректний номер рядку" << endl;
        return 1;
    }

    rowIndex = rowNumber - 1;

    minVal = findMinInRow(arr, NUM, rowIndex);
    cout << "Мінімальний елемент рядку " << rowNumber << ": " << minVal << endl;

    shiftRowLeft(arr, NUM, rowIndex, minVal);

    cout << "\nОтримана матриця після зсуву " << rowNumber 
         << " вліво на " << minVal << " ел.:" << endl;
    displayMatrix(arr, NUM);

    return 0;
}

void fillMatrix(int u[][NUM], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            u[i][j] = rand() % 9 + 1;
        }
    }
}

void displayMatrix(int u[][NUM], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << u[i][j] << "\t";
        }
        cout << endl;
    }
}

int findMinInRow(int u[][NUM], int n, int row) {
    int minElem = u[row][0];
    for (int j = 1; j < n; j++) {
        if (u[row][j] < minElem) {
            minElem = u[row][j];
        }
    }
    return minElem;
}

void shiftRowLeft(int u[][NUM], int n, int row, int k) {
    int circle = 0;
    while (circle < k) {
        int work = u[row][0];
        for (int j = 0; j < n - 1; j++) {
            u[row][j] = u[row][j + 1];
        }
        u[row][n - 1] = work;
        circle++;
    }
}