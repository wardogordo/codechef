#include <iostream>
//#include <vector>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int n;
	    std::cin >> n;
	    int total{1};
//        std::vector<int> total;
        for (int i = n; i > 0 ; --i) {
            total *= i;
        }
        std::cout << total << '\n';
	}
	return 0;
}
