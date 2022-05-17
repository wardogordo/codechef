#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, x, k;
        std::cin >> n >> x >> k;
        if (n * x <= k)
            std::cout << "YES" << '\n';
        else
            std::cout << "NO" << '\n';
    }
    return 0;
}
