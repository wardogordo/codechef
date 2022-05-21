#include <iostream>
#include <vector>

int main()
{
    int t;
    std::cin >> t;
    std::vector<int> number;

    while (t--)
    {
        int myInt{};
        std::cin >> myInt;
        for (int i = 0; i < 5; ++i)
        {
            int tem1;
            tem1 = (int)pow(10, i);
            std::cout << "tem1: " << tem1 << '\n';
            // if myInt / some 10^x == 0, exit the loop.
            number.push_back(myInt / tem1 % 10);
            number.push_back(myInt / 10 % 10);
            number.push_back(myInt / 100 % 10);
            number.push_back(myInt / 1000 % 10);
            number.push_back(myInt / 10000 % 10);
        }
        int tem{0};
        for (int i = 4; i >=0; --i)
        {
            std::cout << "number: " << number[i] << '\n';
            tem += number[i];
        }
        std::cout << "sum: " << tem << '\n';
/*

        int tem{0};
           for (auto i : number)
           {
               tem += i;
               std::cout << "Digit: " << i << '\n';
               std::cout << "TOTAL: " << tem << '\n';
           }
*/

    }

    return 0;
}
