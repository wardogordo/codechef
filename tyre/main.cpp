#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, m; // bikes, cars
        std::cin >> n >> m;

        std::cout << (n * 2) + (m * 4) << '\n';

    }
    return 0;
}
