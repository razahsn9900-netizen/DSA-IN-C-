#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter a Number: ";
    // cin>>n;
    // // Wap to print first n odd numbers
    // for (int j=1;j<=n;j++){
    //     cout<<2*j-1<<" ";
    // }

    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    // Wap to print first n odd numbers
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<2*j-1<<" ";
        }
        cout<<endl;
    }
}