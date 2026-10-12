#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    // Method 1
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){  // spaces
            cout<<"  ";
        }
        for (int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}