#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int x, y;
        std::cin >> x >> y;

        if (y <= x * 1.07)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    return 0;
}
