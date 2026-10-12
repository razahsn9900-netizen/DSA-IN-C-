#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    // First row (2n-1 stars)
    for (int i=1;i<=2*n-1;i++){
        cout<<"* ";
    }
    cout<<endl;
    // 1 loop mai 3 loop
    n--;
    for (int i=1;i<=n-1;i++){
        for (int j=1;j<=n+1-i;j++){ // stars (hori. flipped triangle)
            cout<<"* ";
        }
        for (int j=1;j<=2*i-1;j++){ // spaces (odd triangle)
            cout<<"  ";
        }
        for (int j=1;j<=n+1-i;j++){ // stars (hori. flipped triangle)
            cout<<"* ";
        }
        cout<<endl;
    }
        
}

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i=n;i>=1;i--){
//         for (int j=1;  j<=2*n-1;j++){
//             if (j<=i || j>=2*n-i){
//                 cout<<"*";
//             }
//             else {
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;
//     }
// }