#include<iostream>
using namespace std;
// int x=100;
// void fun(){
//     cout<<x<<endl;
// }
// int main(){
//     cout<<x<<endl;
//     fun();
// }

int x = 7;
void fun(){
   x = 23;
   
}
int main(){
    cout<<x<<endl;
    fun();
    cout<<x<<endl;
}