#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace::std;

int sumNatural(int n);

int main() {
    int n;
    printf("\n Enter the number to find the sum of natural numbers: ");
    cin >> n;
    cout << "\n Sum of first " << n << " natural numbers is: " << sumNatural(n) << endl;
    getch();
    return 0;
}

int sumNatural(int n) {
    if (n == 0) return 0;
    else return n + sumNatural(n - 1);
}