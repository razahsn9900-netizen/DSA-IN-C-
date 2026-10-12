#include<iostream>
using namespace std;
long long int factorial(int x){
    long long int fact=1;
    for (int i=2;i<=x;i++){
        fact*=i;

    }
    return fact;
}
long long int ncr(int n, int r){
    if (n<0 || r>n){
        cout<<"invalid_argument";
        return 0;

    }
    else {
        long long int N=factorial(n);
        long long int D1=factorial(r);
        long long int D2=factorial(n-r);
        return(N/(D1*D2));
    }
}

int main(){
    int a,b;
    cout<<"enter two numbers i.e a and b to get aCb ";
    cin>>a>>b;
    cout<<(a,b);
    return 0;
}