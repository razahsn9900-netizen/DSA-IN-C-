#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter 3 positive integers :";
    cin>>a>>b>>c;
    if(a>0 && b>0 && c>0){
    cout<<"3 positive integers";
    }
    else{
    cout<<"Not positive integers";
    }
    return 0;
}