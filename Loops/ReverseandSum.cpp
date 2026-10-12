#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int original = n;
    int reverse = 0;

    while (n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    int sum = original + reverse;

    cout << "Reverse = " << reverse << endl;
    cout << "Sum = " << sum;

    return 0;
}