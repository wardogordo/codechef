#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int a, b, c;
    std::cin >> a >> b >> c;
    int rank[3]{};

    if (a > b)
    {
        if (b < c)
        {
            rank[0] = b;
            if (a < c)
                std::cout << "a: " << a << '\n';
            else
                std::cout << "c: " << c << '\n';
        }
        else
        {
            rank[0] = c;
            if (a < b)
                std::cout << "a: " << a << '\n';
            else
                std::cout << "b: " << b << '\n';
        }
    }
    else
    {
        // a < b
        if (a < c)
        {
            rank[0] = a;
            if (b < c)
                std::cout << "b: " << b << '\n';
            else
                std::cout << "c: " << c << '\n';
        }
        else
        {
            rank[0] = c;
            if (a < b)
                std::cout << "a: " << a << '\n';
            else
                std::cout << "b: " << b << '\n';
        }
    }
    return 0;
}