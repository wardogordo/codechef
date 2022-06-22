#include <iostream>

using namespace std;
long long gcd(long long int a, long long b){
    if(b==0) return a;
    std::cout << a << " " << b << " | " << b << ", " << a << " % " << b << "(" << a%b << ")" << '\n';
    return gcd(b, a%b);
}

int main() {
    int x, y;
    std::cin >> x >> y;
    std::cout << gcd(x, y) << '\n';

    return 0;
}
