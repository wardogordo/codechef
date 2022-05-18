#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int x, y;
        std::cin >> x >> y;
        std::cout << abs(y - x) << '\n';
    }
    return 0;
}
