#include <iostream>
#include <vector>

int main()
{
    int mine{54321};
    int t{5};
    std::vector<int> number;

    number.push_back(mine / 1 % 10);
    number.push_back(mine / 10 % 10);
    number.push_back(mine / 100 % 10);
    number.push_back(mine / 1000 % 10);
    number.push_back(mine / 10000 % 10);
    int tem{0};
    for (auto i : number)
    {
        tem += i;
        std::cout << i << '\n';
        std::cout << "TOTAL: " << tem << '\n';
    }

}
