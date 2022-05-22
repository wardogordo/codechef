#include <iostream>

int main() {
    int n;
//    std::cin >> n;
    int a;
    int b;
    int c;
//    std::cin >> a >> b >> c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << c << '\n';
    int rank[]{};

//    while (n--)
//    {
        if (a > b) {
            rank[0] = a;
            rank[1] = b;
//            rank[2] = c;
            std::cout << "First comparison a: " << rank[0] << '\n';
            std::cout << a << " " << b << " " << c << '\n';
        }
        else {
                rank[0] = b;
                rank[1] = a;
                rank[2] = c;
                std::cout << "First comparison b: " << rank[0] << '\n';
                std::cout << a << " " << b << " " << c << '\n';

            }
        std::cout << "Rank 0 is now: " << rank[0] << '\n';

        std::cout << "c is: " << a << '\n';

        if (rank[0] < c)
        {
            rank[0] = c;
            std::cout << "Evaluated c as greater: " << rank[0] << '\n';
        }


        std::cout << "Rank 0 is set: " << rank[0] << '\n';

        if (rank[1] < rank[2])
            std::cout << rank[1] << '\n';
        else
            std::cout << rank[2] << '\n';

    std::cout << a << " " << b << " " << c << '\n';

//    }
    return 0;
}