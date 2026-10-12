#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter No. of Rows : ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            
            if (i%2 == 1){
                cout<<j<<" ";
            }
            else{
                cout<<char('A'+j-1)<<" ";
            }
        }
        cout<<endl;
    }

    //  int n;
    // cout << "Enter number of rows: ";
    // cin >> n;

    // for (int i = 1; i <= n; i++) {

    //     for (int j = 1; j <= i; j++) {

    //         if (i % 2 == 1) {
    //             cout << j << " ";
    //         }
    //         else {
    //             cout << char('A' + j - 1) << " ";
    //         }
    //     }

    //     cout << endl;
    // }
}


    // for (int i = 1; i <= 5; i++) {

    //     if (i % 2 == 1) {
    //         for (int j = 1; j <= i; j++) {
    //             cout << j << " ";
    //         }
    //     }
    //     else {
    //         for (char j = 'A'; j < 'A' + i; j++) {
    //             cout << j << " ";
    //         }
    //     }

    //     cout << endl;
    // }

    // return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//     for (int i = 1; i <= 5; i++) {

//         if (i % 2 != 0) {
//             // Odd rows: print numbers
//             for (int j = 1; j <= i; j++) {
//                 cout << j << " ";
//             }
//         }
//         else {
//             // Even rows: print alphabets
//             for (char j = 'A'; j < 'A' + i; j++) {
//                 cout << j << " ";
//             }
//         }

//         cout << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for (int i=1;i<=5;i++){
//         if (i%2 !=0){  // Odd rows: Print Numbers
//             for (int j=1;j<=i;j++){
//                 cout<<j<<" ";
//             }
//         }
//         else { // Even rows : Print Numbers
//             for (char j='A'; j < 'A' + i;j++){
//                 cout<<j<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }