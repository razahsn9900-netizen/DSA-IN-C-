#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n+1-i;j++){  // n+1-i ki jagah n-i
             cout<<"  ";
        }
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    // for (int i=1;i<=n;i++){
    //     for (int j=1;j<=n;j++){
    //         if ((i+j)>n) cout<<"* ";
    //         else 
    //         cout<<"# ";
    //     }
    //     cout<<endl;
    // }

    // for (int i=1;i<=n;i++){
    //     for (int j=1;j<=n;j++){
    //         if ((i+j)>n) cout<<"* ";
    //         else 
    //         cout<<"  ";
    //     }
    //     cout<<endl;
    // }

    // for (int i=1;i<=n;i++){
    //     for (int j=1;j<=n+1-i;j++){
    //          cout<<"# ";
    //     }
    //     for (int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

}