#include <iostream>

int main() {
    int T;
    std::cin >> T;

    while (T--)
    {
        int X, H;
        std::cin >> X >> H;
        if (X >= H)
            std::cout << "YES" << '\n';
        else
            std::cout << "NO" << '\n';
    }
    return 0;
}
