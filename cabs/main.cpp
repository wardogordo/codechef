#include <iostream>

int main()
{
   int t;
   std::cin >> t;

    while (t--)
    {
        int x, y;
        std::cin >> x >> y;
        if (x < y)
            std::cout << "FIRST" << '\n';
        else if (x > y)
            std::cout << "SECOND" << '\n';
        else
            std::cout << "ANY" << '\n';
    }
   return 0;
}
