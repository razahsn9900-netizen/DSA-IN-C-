#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    // if(n%5==0 and n%3==0)
    // cout<<"Anuj";
    // else if(n%5==0)
    // cout<<"Kartikey";
    // else if(n%3==0)
    // cout<<"Sakshi";
    // else
    // cout<<"Hitesh";
    if(n%5!=0 && n%3!=0)
    cout<<"Hitesh";
    if(n%5==0 && n%3!=0)
    cout<<"Kartikey";
    if(n%5==0 && n%3==0)
    cout<<"Anuj";
    if(n%3==0 && n%5!=0)
    cout<<"Sakshi";
    return 0;
}