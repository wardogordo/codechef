#include <iostream>

int main()
{
   int t;
   std::cin >> t;

    while (t--)
    {
        int x, y;
        std::cin >> x >> y;
        int x_t, y_t;
        x_t = x * 3;
        y_t = y * 2;
        if (x_t < y_t)
            std::cout << x_t << '\n';
        else
            std::cout << y_t << '\n';
    }
   return 0;
}
