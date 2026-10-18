#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 sides of a triangle :";
    cin >> a >> b >> c;
    if (a+b>c && a+c>b && b+c>a)
        cout << "Triangle is valid";
    else
        cout << "Not valid";
}