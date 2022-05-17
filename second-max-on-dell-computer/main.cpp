#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int rank[3]{};

    while (n--)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        if (a > b)
        {
            if (b < c)
            {
                rank[0] = b;
                if (a < c)
                    std::cout << a << '\n';
                else
                    std::cout << c << '\n';
            }
            else
            {
                rank[0] = c;
                if (a < b)
                    std::cout << a << '\n';
                else
                    std::cout << b << '\n';
            }
        }
        else
        {
            // a < b
            if (a < c)
            {
                rank[0] = a;
                if (b < c)
                    std::cout << b << '\n';
                else
                    std::cout << c << '\n';
            }
            else
            {
                rank[0] = c;
                if (a < b)
                    std::cout << a << '\n';
                else
                    std::cout << b << '\n';
            }
        }
    }

    return 0;
}