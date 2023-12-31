#include <iostream>
#include <vector>

int main() {
    int z;
    while (std::cin >> z) {
        std::vector<std::vector<int>> ara(z, std::vector<int>(z, 3));
        int a, b, c, d;

        for (a = 0; a < z; a++) {
            for (b = 0; b < z; b++) {
                ara[a][b] = 3;
            }
        }

        for (a = 0; a < z; a++) {
            ara[a][a] = 1;
        }

        d = z - 1;
        for (a = 0, b = d; a < z; a++, b--) {
            ara[a][b] = 2;
        }

        for (a = 0; a < z; a++) {
            for (b = 0; b < z; b++) {
                std::cout << ara[a][b];
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
