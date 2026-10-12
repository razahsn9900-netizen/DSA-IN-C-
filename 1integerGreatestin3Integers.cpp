#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter 3 Numbers :";
    cin>>a>>b>>c;
    // if(a>=b && a>=c)
    // cout << a << " is largest";
    // else if(b>=a && b>=c)
    // cout << b << " is largest";
    // else
    // cout << c << " is largest";
    // return 0;
    if(a>=b){
        if(a>=c)
        cout<<a<<"is largest";
        else // c>a>b
          cout<<c<<"is largest";
    }
    else{  // b>a
        if(b>=c)
            cout<<b<<"is largest";
        else // c>b>a
            cout<<c<<"is largest";
    }
}