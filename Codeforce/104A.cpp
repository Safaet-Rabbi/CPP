#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int ways = 0;
    if (n >= 12 && n <= 21) {
        ways = 4;
    } else if (n == 11) {
        ways = 4;
    }

    std::cout << ways << std::endl;

    return 0;
}
