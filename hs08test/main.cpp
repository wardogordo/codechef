#include <iostream>
#include <iomanip>

int main()
{
    int x; // withdrawal amount
    double y; // balance
    std::cin >> x >> y;

    if (x % 5 != 0 || x > y - 0.50)
        std::cout << y << '\n';
    else
    {
        std::cout << std::fixed << std::setprecision(2) << std::setfill('0');
        std::cout << y - x - 0.50;
    }
    return 0;
}
