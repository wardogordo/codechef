#include <iostream>

    int metGoal{0};

    void CountGoals(int solved)
    {
        if (solved >= 10)
        {
            metGoal += 1;
        }
    }

int main() {
	int p1, p2, p3, p4;
	std::cin >> p1 >> p2 >> p3 >> p4;
	CountGoals(p1);
	CountGoals(p2);
	CountGoals(p3);
	CountGoals(p4);

	std::cout << metGoal << '\n';


	return 0;
    return 0;
}
