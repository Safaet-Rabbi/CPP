#include <iostream>
#include <vector>

void printArray(int n) {
    std::vector<std::vector<int>> arr(n, std::vector<int>(n));

    // Fill the array with the appropriate values
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                arr[i][j] = 1;
            } else if (i + j == n - 1) {
                arr[i][j] = 2;
            } else {
                arr[i][j] = 3;
            }
        }
    }

    // Print the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    while (std::cin >> n) {
        printArray(n);
    }
    return 0;
}
