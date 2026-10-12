#include<iostream>
using namespace std;
void fun(int n){
    cout<<n<<endl;
    if (n>21) return;
    cout<<n*n<<endl;
}
int main(){
    fun(28);

}