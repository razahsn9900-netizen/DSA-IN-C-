#include<iostream>
using namespace std;
int main(){
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;

    int nfact = 1;
    for (int i=1;i<=n;i++){
        nfact *= i;
    }
    int rfact = 1;
    for (int i=1;i<=r;i++){
        rfact *= i;
    }
    int nrfact = 1;
    for (int i=1;i<=n-r;i++){
        nrfact *= i;
    }

    int ncr = nfact / (rfact*nrfact);
    cout<<ncr;
}