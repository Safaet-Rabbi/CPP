#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int totalChips = 0;

    for (int i = 1; i <= n; i++) {
        totalChips += i;
        if (totalChips > m) {
            totalChips = m;
            break;
        }
    }

    int remainingChips = m - totalChips;
    std::cout << remainingChips << std::endl;

    return 0;
}
