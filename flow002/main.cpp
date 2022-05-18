#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int a, b;
        std::cin >> a >> b;
        int r;
        r = a % b;
        std::cout << r << '\n';
    }
    return 0;
}
