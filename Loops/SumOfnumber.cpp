#include <iostream>
using namespace std;
int main() {
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

    // int sum = 0;

    // while (n > 0) {
    //     int digit = n % 10;
    //     sum = sum + digit;
    //     n = n / 10;
    // }

    // cout << "Sum of digits = " << sum;

    // return 0;

    int n;
    cin>>n;
    int sum =0;
    while (n !=0){
        int lastDigit = n%10;
        sum += lastDigit;
        n /= 10;
    }
    cout<<sum;
}