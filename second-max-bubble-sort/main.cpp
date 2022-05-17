#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    while (n--)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        int rank[3]{};
        if (a < b)
        {
            rank[0] = a;
            rank[1] = b;
        }

        if (b < a)
        {
            rank[0] = b;
            rank[1] = a;
        }

        if (rank[0] > c)
            rank[0] = c;

        if (rank[2] < rank[1])
            

        std::cout << "First: " << rank[0];
    }


    return 0;
}
