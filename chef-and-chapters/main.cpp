#include <iostream>




int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int x, y, z;
        std::cin >> x >> y >> z;
        int total;
        total = x * y * z;
        std::cout << total << '\n';
    }

    return 0;
}
