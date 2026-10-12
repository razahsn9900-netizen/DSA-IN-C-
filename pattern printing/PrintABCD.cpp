#include<iostream>
using namespace std;
int main(){
//    for (char i ='A'; i<='D';i++){
//     for (int j=1; j<=4;j++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//    }
//    return 0;

// int n;
// cin>>n;
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=n;j++){
//         cout<<char(i+64)<<" ";
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=n;j++){
//         if (i%2 == 0)
//         cout<<(char)(i+64)<<" ";
//         else cout<<(char)(i+96)<<" ";
//     }
//     cout<<endl;
// }

int n;
cin>>n;
for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        cout<<(char)(j+64)<<" ";
        
    }
    cout<<endl;
    }
}