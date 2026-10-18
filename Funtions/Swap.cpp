#include<iostream>
using namespace std;
int main(){
    int a=8, b=9;
    cout<<a<<" "<<b<<endl;
    // a=(a+b)-(b=a);

    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b<<endl;


    // int a=8, b=9;
    // cout<<a<<" "<<b<<endl;
    // int temp = a;
    // a=b;
    // b=temp;
    // cout<<a<<" "<<b<<endl;

//     int a=6,b=9;
//     cout<<a<<" "<<b<<endl;
//     a=b;
//     b=a;
//     cout<<a<<" "<<b<<endl;
// }
}