#include <iostream>

int main() {
    int x;
    std::cin >> x;

    if(x + 7 > 170)
        std::cout << "YES" << '\n';
    else
        std::cout << "NO" << '\n';
    return 0;
}
