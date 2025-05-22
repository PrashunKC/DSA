#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace::std;

int gcd(int a, int b); // Function declaration

int main() {
    int num1, num2;

    printf("\n Enter two numbers to find GCD: ");
    cin >> num1 >> num2;
    cout << "\n GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    getch();
    return 0;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}