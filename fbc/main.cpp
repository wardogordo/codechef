#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int k, x;
        std::cin >> k >> x;
        std::cout << k - x << '\n';
    };
    return 0;
}
