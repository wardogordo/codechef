#include <iostream>

// https://www.geeksforgeeks.org/bubble-sort/

int l[9]{21, 22,25, 11, 14, 17, 7,4, 1};
int r = sizeof (l) / sizeof (l[0]);
int s = (sizeof(l) / sizeof(l[0]) - 1);

void OrderList(int n)
{
    n = sizeof(l) / sizeof(l[0]);
    for (int i = 0; i < n; ++i)
    {
        std::cout << l[i] << " ";
    }
    std::cout << '\n';
}

void SortMyList()
{
    for (int h = 0; h < r; ++h)
    {
        std::cout << "Outer: " << "h = " << h << '\n';
        for (int i = 0; i < s; ++i)
        {
            std::cout << "\tInner: " << "i = " << i << '\n';
            if (l[i] > l[i + 1])
            {
                std::swap(l[i], l[i + 1]);
                OrderList(r);;
            }
            else
                std::cout << "\tNo change." << '\n';
        }
        std::cout << '\n';
    }
}

int main()
{
    SortMyList();
    return 0;
}
