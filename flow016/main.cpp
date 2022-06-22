#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    while(t--){
        int a, b;
        std::cin >> a >> b;
        int greater, lesser, LCM;
        if(a > b) {
            greater = a;
            lesser = b;
        }
        else {
            greater = b;
            lesser = a;
        }
        LCM = greater * lesser;
        int decr;
        decr = LCM;
        while(decr > 1){
            if(decr % greater == 0 && decr % lesser == 0)
                LCM = decr;
            decr = decr - greater;
        };

        int GCD;
        GCD = (greater * lesser) / LCM;
        std::cout << GCD << " " << LCM << '\n';
    }
    return 0;
}