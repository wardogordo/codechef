#include <iostream>
#include <vector>
#include <cmath>

int CountDigits(int num)
{
    int counter{0};
    while (num != 0)
    {
        num = num / 10;
        counter++;
    }

    return counter;
}
int main() {
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> numberArray{};
        for (int i = 0; i < CountDigits(n); ++i)
        {
            int tem{};
            tem = n / (int)pow(10, i) % 10;
            numberArray.push_back(tem);
        }
        std::cout << numberArray[0] + numberArray[numberArray.size() - 1] << '\n';
    }
    return 0;
}
