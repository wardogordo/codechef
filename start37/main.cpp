#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int x, y, z;
        std::cin >> x >> y >> z;
        int m{};
        m = (z - y) / x;
        std::cout << m << std::endl;
    }
    return 0;
}
