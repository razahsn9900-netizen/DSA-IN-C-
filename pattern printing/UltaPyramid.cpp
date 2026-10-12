#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int nst = 2*n-1, nsp =0;
        for (int i=1;i<=n;i++){
        for (int j=1;j<=nsp;j++){ // spaces
            cout<<"  ";
        }
        for (int j=1;j<=nst;j++){ // stars
            cout<<"* ";
        }
        nsp++;
        nst -= 2;
        cout<<endl;
    }
}