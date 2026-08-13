#include <iostream>
using namespace std;

long long factorialRecursive(int n) {
   
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * factorialRecursive(n - 1);
}

int main() {
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers.";
    } else {
        cout << "Factorial of " << n << " is "
             << factorialRecursive(n);
    }
