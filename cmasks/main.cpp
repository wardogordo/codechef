#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int x, y;
        std::cin >> x >> y;

        if (y * 10 <= x * 100)
            std::cout << "CLOTH" << '\n';
        else
            std::cout << "DISPOSABLE" << '\n';
    }
    return 0;
}
