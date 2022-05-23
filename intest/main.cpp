#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;

    int count{0};
    for (int i = 0; i < n; ++i)
    {
        int t;
        std::cin >> t;
        if (t % k == 0)
        {
            count ++;
        }
    }
    std::cout << count << '\n';
    return 0;
}
