#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int count = 1;
    // while (n/=10){
    //     count++;
    // }
    // cout<<"Number of digits = " << count;

    //  int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int count = 0;
    // if (n==0) count++;
    // while (n != 0){
    //     n/=10;
    //     count++;
    // }
    // cout<<"Number of digits = " << count;

    // int n;
    // cout<<"Enter a number : ";
    // cin>>n;
    // int count = 0;
    // if (n==0) count++;
    // for(; n!=0; n/=10){
    //     count++;
    // }
    // cout<<"Number of digits = " << count;

    // int x = 34353;
    // x/=10;
    // x/=10;
    // x/=10;
    // x/=10;
    // cout<<x;


    int n;
    cin >> n;

    if (n == 0) {
        cout << 1;
    } else {
        int count = 0;
        n = abs(n);

        while (n > 0) {
            n = n / 10;
            count++;
        }

        cout << count;
    }

    return 0;

}