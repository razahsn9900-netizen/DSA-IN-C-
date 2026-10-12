#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a positive integer :";
    cin >> n;
    if (n>=1000 && n<=9999)
    cout << "Four digit number";
    else
    cout << "Not a four digit number";
    return 0;

}