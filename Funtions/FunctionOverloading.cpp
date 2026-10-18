#include<iostream>
using namespace std;
void print(){
    cout<<"No Arguments"<<endl;
}
void print(int x){
    cout<<"one integer: "<<x<<endl;
}
void print(int x, int y){
    cout<<"Two integers: "<<x<<" "<<y<<endl;
}

    int main(){
    print();
    print(5);
    print(5, 10);
    return 0;
}


