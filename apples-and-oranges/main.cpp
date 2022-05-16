#include <iostream>

int main() {
    int x;
    std::cin >> x;
    int a, b;
    std::cin >> a >> b;
    if (a + b <= x)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}
