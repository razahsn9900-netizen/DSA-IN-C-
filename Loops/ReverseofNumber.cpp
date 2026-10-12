#include <iostream>
using namespace std;

int main() {
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

    // int reverse = 0;

    // while (n > 0) {
    //     int digit = n % 10;
    //     reverse = reverse * 10 + digit;
    //     n = n / 10;
    // }

    // cout << "Reverse = " << reverse;

    // return 0;

    int n;
    cin>>n;
    int rev = 0;
    while(n != 0){
        rev *= 10;
        rev += (n%10);
        n /= 10;
    }
    cout<<rev;
}