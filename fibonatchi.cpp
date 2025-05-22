#include <iostream>
using namespace std;

int fibo(int a);

int main() {
    int n;
    cout << "\n Enter length of Fibonacci sequence: ";
    cin >> n;

    cout << "\n Fibonacci number at position " << n << " is: " << fibo(n) << endl;
    return 0;
}

int fibo(int a) {
    if (a == 0) return 0;
    if (a == 1) return 1;
    return fibo(a - 1) + fibo(a - 2);
}