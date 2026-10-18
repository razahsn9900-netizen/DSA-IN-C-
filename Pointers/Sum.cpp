#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a number :";
    cin>>a>>b;
      // Pointers store the addresses of num1 and num2
    int* ptr1 = &a;
    int* ptr2 = &b;
      // *ptr reads the value stored at the address
    int sum = *ptr1 + *ptr2;
    cout<<"Sum = "<<sum<<endl;
}