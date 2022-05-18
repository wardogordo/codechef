#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int a, b, m; // initial, final, total number of checkpoint(s)
        std::cin >> a >> b >> m;

        // if distance is <= m/2
        if (abs(a - b ) <= m/2)
            std::cout << abs(a - b) << '\n';
        // if distance is > m/2
        else
            std::cout << m - abs(a - b) << '\n';
    }

    return 0;
}
