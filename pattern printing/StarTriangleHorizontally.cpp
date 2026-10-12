#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    // for (int i=1;i<=n;i++){
    //     for (int j=1;j<=n+1-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Method 3
    // for (int i=n;i>=1;i--){
    //     for (int j=1;j<=i;j++){
    //         cout<<j<<"* ";
    //     }
    //         cout<<endl;
    // }

    int a = n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=a;j++){
            cout<<"* ";
        }
        a--;
        cout<<endl;
    }

}