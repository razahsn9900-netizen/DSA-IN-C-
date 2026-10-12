#include<iostream>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    if (ch >= 'A' && ch <='z')
    cout << "Capital Alphabet";
    else
    cout << "Not a capital Alphabet";
}