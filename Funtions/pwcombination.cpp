#include<iostream>
using namespace std;
int fact(int x){
    int result = 1;
    for (int i=1;i<=x;i++){
        result *= i;
    }
    return result ;
}
int main(){
    int n,r;
    cout<<"Enter n and r : ";
    cin>>n>>r;
    if (n<0 || r<0 || r>n){
        cout<<"Invalid output"<<endl;
        return 1;
    }
    int ncr = fact(n)/(fact(r)*fact(n-r));
    cout<<ncr<<endl;
    return 0;
}