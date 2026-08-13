#include <iostream>
using namespace std;

long long factorialIterative(int n) {
    long long fact = 1;

    for (int i = 2; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers.";
    } else {
        cout << "Factorial of " << n << " is "
             << factorialIterative(n);
    }

    return 0;
}
