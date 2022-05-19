#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, m, k;
        std::cin >> n >> m >> k;

        if (n / k < m)
            std::cout << "YES" << '\n';
        else if (n / k == m && n % k == 0)
            std::cout << "YES" << '\n';
        else
            std::cout << "NO" << '\n';
    }
    return 0;
}
