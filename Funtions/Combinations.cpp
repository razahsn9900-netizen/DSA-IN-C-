#include <iostream>
using namespace std;

int fact(int x) {
    int result = 1;

    for (int i = 1; i <= x; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    if (n < 0 || r < 0 || r > n) {
        cout << "Invalid input\n";
        return 1;
    }

    int ncr = fact(n) / (fact(r) * fact(n - r));
    cout << ncr << endl;

    return 0;
}


// #include<iostream>
// using namespace std;
// int fact(int x){
//     for (int i=1;i<=x;i++){
//         return fact;
//     }
//     int main(){
//         int n,r;
//         cout<<"Enter n and r: ";
//         cin>>n>>r;

//         int ncr = fact(n) / (fact(r)*fact(n-r));
//         cout<<ncr<<endl;
//         int fact = 7;
//         cout<<fact;
    
// }
// }



// int fact(int x){
//     int fact = 1;
//     for (int i=1;i<=x;i++){
//         fact *=i;
//     }
//     return fact;
// }
// int main(){
//     int n,r;
//     cout<<"Enter n and r: ";
//     cin>>n>>r;
//     int ncr = fact(n) / (fact(r)*fact(n-r));
//     cout<<ncr;


    // int n,r;
    // cout<<"Enter n and r: ";
    // cin>>n>>r;

    // int nfact = 1;
    // for (int i=1;i<=n;i++){
    //     nfact *= i;
    // }
    // int rfact = 1;
    // for (int i=1;i<=r;i++){
    //     rfact *= i;
    // }
    // int nrfact = 1;
    // for (int i=1;i<=n-r;i++){
    //     nrfact *= i;
    // }

    // int ncr = nfact / (rfact*nrfact);
    // cout<<ncr;
