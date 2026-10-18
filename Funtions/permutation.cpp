#include<iostream>
using namespace std;
int fact(int x){
    int fact = 1;
    for (int i=1;i<=x;i++){
        fact *=i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    int npr = fact(n) / (fact(n-r));
    cout<<npr;

// int main(){
//     int n,r;
//     cout<<"Enter n and r: ";
//     cin>>n>>r;

//     int nfact = 1;
//     for (int i=1;i<=n;i++){
//         nfact *= i;
//     }
//     int nrfact = 1;
//     for (int i=1;i<=n-r;i++){
//         nrfact *= i;
//     }
//     int npr = nfact / (fact(nr));
//     cout<<npr;
}