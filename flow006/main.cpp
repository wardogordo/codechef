#include <iostream>
#include <vector>

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
        for (int i = 0; i < (log10(myInt) + 1); ++i)
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
