#include <iostream>



int main()
{
    int T{}; // number of test cases
    std::cin >> T;

    for (int i = 0; i < T; ++i)
    {
        int X {};
        if (X <= 30) // doesn't require subscription
        {
            printf("NO\n");
        }

        else
            printf("YES\n");
    }

    return 0;
}
