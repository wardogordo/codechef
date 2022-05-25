#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while(t--)
    {
        int x, y, z;
        std::cin >> x;
        y = x * .1;
        if (y > 100)
            std::cout << y << std::endl;
        else
            std::cout << 100 << std::endl;
    }
    return 0;
}
