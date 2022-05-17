#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::cout << "t: " << t << '\n';
        int x;
        std::cin >> x;
        if (x >= 1 && x <=4)
            std::cout << "YES" << '\n';
        else
            std::cout << "NO" << '\n';
    }
    return 0;
}
