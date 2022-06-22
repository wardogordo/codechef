#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    std::cin >> t;
    while(t--){
        int n, d; // number of problems, spaced list of difficulty ratings of each of n problems
        std::cin >> n;
        vector<int> probs{};

        for (int i = 0; i < n; ++i) {
            std::cin >> d;
            probs.push_back(d);
        }

//        std::cout << "size: " << probs.size() << '\n';
        int removalCounter{0};
        for (int i = 0; i < n; ++i) {
            if (probs[i] >= 1000)
                removalCounter += 1;
        }
        std::cout << removalCounter << '\n';
    }
    return 0;
}
