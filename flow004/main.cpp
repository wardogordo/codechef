#include <iostream>
#include <vector>
#include <cmath>

int CountDigits(int num)
{
    int counter{0};
    while (num != 0)
    {
        num = num / 10;
        std::cout << num << '\n';
        counter++;
    }

    return counter;
}
int main() {
    int t;
    std::cin >> t;
    std::cout << "My counter: " << CountDigits(t);

    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> numberArray{};
        // Convert int to vector array
        for (int i = 0; i < CountDigits(n); ++i)
        {
            numberArray[i] = n / (int) pow(10, i) % 10;
        }

        std::cout << "HELP1";
//        std::cout << numberArray[0] + numberArray[CountDigits(n) - 1];
    }
    return 0;
}
