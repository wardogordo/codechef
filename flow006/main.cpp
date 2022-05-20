#include <iostream>
#include <vector>

int main()
{
    int mine{54021};
    int t{5};
    std::vector<int> number;


    std::cout << mine / 100;

/*

    // if mine / some 10^x == 0, exit the loop.
    number.push_back(mine / 1 % 10);
    number.push_back(mine / 10 % 10);
    number.push_back(mine / 100 % 10);
    number.push_back(mine / 1000 % 10);
    number.push_back(mine / 10000 % 10);
    int tem{0};
    for (auto i : number)
    {
        tem += i;
        std::cout << "Digit: " << i << '\n';
        std::cout << "TOTAL: " << tem << '\n';
    }
*/

}
