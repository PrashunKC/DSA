#include <iostream>
using namespace std;

class HanoiSolver {
public:
    void solve(int n, char from, char to, char aux) {
        if (n == 1) {
            cout << "Move disk 1 from " << from << " to " << to << endl;
            return;
        }
        solve(n - 1, from, aux, to);
        cout << "Move disk " << n << " from " << from << " to " << to << endl;
        solve(n - 1, aux, to, from);
    }
};

int main() {
    int choice;
    cout << "Enter the number of Hanoi disks to solve: ";
    cin >> choice;
    cout << "\nSolving Tower of Hanoi for " << choice << " disks:\n" << endl;
    HanoiSolver solver;
    solver.solve(choice, 'A', 'C', 'B');

    return 0;
}