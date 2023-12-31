#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char operation;
    cin >> operation;

    double M[12][12];
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    double sum = 0;
    int count = 0;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12 - i - 1; j++) {
            sum += M[i][j];
            count++;
        }
    }

    if (operation == 'M') {
        double average = sum / count;
        cout << fixed << setprecision(1) << average << endl;
    } else if (operation == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    }

    return 0;
}