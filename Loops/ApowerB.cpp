#include<iostream>
using namespace std;
int main(){
    // int a,b;
    // cout<<"Enter number a and b : ";
    // cin>>a>>b;
    // int power = 1;
    // for (int i=1; i<=b; i++){
    //     power *=a;
    // }
    // cout<<a<<"power"<<b <<"="<<power;

    // int a;
    // cout<<"Enter base : ";
    // cin>>a;
    // int b;
    // cout<<"Enter exponent : ";
    // cin>>b;
    // int ans = 1;
    // for(int i=1; i<=b; i++){
    //     if (a==1)
    //     break;
    //     ans *=a;
    // }
    // cout<<ans;

    
    int a;
    cout<<"Enter base : ";
    cin>>a;
    int b;
    cout<<"Enter exponent : ";
    cin>>b;
    int ans = 1;
     for(int i=1; i<=b; i++){  // ye loop b baar chal raha hai
        ans *=a;
        if (a==1)
        break;
    }
    if (a==0 && b==0)
    cout<<"Indeterminate Form";
    else
    cout<<ans;
}