#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<min(i,j)<<" ";
            // if (i<=j)
            // cout<<i<<" ";
            // else
            //     cout<<j<<" ";
            
        }
        cout<<endl;
    }
}