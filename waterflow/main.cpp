#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int w, x, y, z;
        std::cin >> w >> x >> y >> z; // bucket, capacity, rate, hours

        // if w + y * z > x (overflow)

        int total{};
        total = w + (y * z);
        if (total > x)
            std::cout << "overflow" << std::endl;
        else if (total < x)
            std::cout << "unfilled" << std::endl;
        else
            std::cout << "filled" << '\n';

    }
    return 0;
}
