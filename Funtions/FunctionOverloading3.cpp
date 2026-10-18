#include<iostream>
using namespace std;
void fun(int x, char ch){
    cout<<"bear"<<endl;
}
void fun(char ch, int x){
    cout<<"Ilma"<<endl;
}
int main(){
    fun(1, 'Z');
    fun('A', 10);
}

// void fun(int x, float y){
//     cout<<"sahib"<<endl;
// }
// void fun(float y, int x){
//     cout<<"Hasan"<<endl;
// }
// int main(){
//     fun(2.6,3);
// }