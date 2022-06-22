#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int t;
    std::cin >> t;

    while (t--)
    {
        int rev{0};
        int n;
        std::cin >> n;

        while(n > 0){
           rev = rev * 10 + n % 10;
           n = n / 10;
       }
        std::cout << rev << '\n';
    }

    return 0;
}
