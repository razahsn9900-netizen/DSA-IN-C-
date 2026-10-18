#include<iostream>
using namespace std;
int main(){
    int x=7;
    int* ptr = &x;
    *ptr += 8;  // x +=8
    cout<<x<<endl;

    // int x=7;
    // int* ptr = &x;
    // *ptr = 70;
    // cout<<x<<endl;

    // int x=7;
    // int* ptr = &x;
    // cout<<*ptr<<endl;

    // int x=7;
    // int* p1=&x;
    // int* p2=&x;
    // cout<<p1<<" "<<&p1<<endl;
    // cout<<p2<<" "<<&p2<<endl;
}
