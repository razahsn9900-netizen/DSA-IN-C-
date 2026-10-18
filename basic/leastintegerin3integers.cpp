#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 Numbers : ";
    cin>>a>>b>>c;
    // if(a<=b && a<=c)
    // cout<<a<<" is least";
    // else if(b<=a && b<=c)
    // cout<<b<<" is least";
    // else
    // cout<<c<<" is least";
    if (a<=b){
        if(a<=c)
        cout<<a<<" is least";
        else  //c>a>b
        cout<<c<<" is least";
    }
    else{
        if (b<=c)
        cout<<b<<" is least";
        else  // c>b>a
        cout<<c<<" is least";
    }
}