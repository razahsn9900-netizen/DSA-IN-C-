#include<iostream>
using namespace std;
// void power(int base, int exponent = 2){
//     int ans = 1;
//     for (int i=0;i<exponent;i++)
//     ans *=base;
//     cout<<ans<<endl;
// }
// int main(){
//     power(5);
//     power(5,3);
// }

int max(int a, int b){
    if (a>b) return a;
    else return b;
}
void fun(int age = 20){
    cout<<"My age is "<<age<<endl;
}
int main(){
    fun();
}


// void fun(int age){
//     cout<<"My age is "<<age<<endl;
// }
// int main(){
//     fun(19);
// }

// void fun(int age = 18){
//     cout<<"my age is "<<age<<endl;
// }
// int main(){
//     fun();
// }