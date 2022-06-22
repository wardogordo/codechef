#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while(t--){
        int x, y;
        std::cin >> x >> y;
        int secs{0};
        if(y > x){
            while (x != y){
                x += 2;
                y += 1;
                secs += 1;
            }
            std::cout << secs << '\n';
        }
        else if(y < x){
            while (x != y){
                x -= 2;
                y -= 1;
                secs += 1;
            }
            std::cout << secs << '\n';
        }
        else
            std::cout << "0" << '\n';

    }
    return 0;
}
