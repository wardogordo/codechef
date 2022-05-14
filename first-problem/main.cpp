#include <iostream>


using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b;

    while (t--)
    {
        int sum = 0;
        cin >> a >> b;
        sum = a + b;
        std::cout << sum << '\n';
    }
    return 0;
}
