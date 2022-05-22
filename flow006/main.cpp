#include <iostream>
#include <vector>
#include <cmath>

int CountDigits(int num)
{
    int counter{0};

    while (num != 0)
    {
        num = num / 10;
        counter ++;
    }

    return counter;
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int myInt{};
        std::cin >> myInt;
        int total{};
        std::vector<int> number;
        for (int i = 0; i < CountDigits(myInt); ++i)
        {
            int tem;
            tem = (int)pow(10, i);
            number.push_back(myInt / tem % 10);
            total += number[i];
        }
        std::cout << total << '\n';
    }

    return 0;
}
