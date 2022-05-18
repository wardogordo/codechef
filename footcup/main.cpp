#include <iostream>

int main()KK
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int x, y;
        std::cin >> x >> y;

        if (x == y && x != 0)
            std::cout << "YES" << '\n';
        else
            std::cout << "NO" << '\n';
    }
    return 0;
}
