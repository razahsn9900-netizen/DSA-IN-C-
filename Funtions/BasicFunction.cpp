#include<iostream>
using namespace std;
void sumit(){
    cout<<"Hi Sumit\n";
}
void arjun(){
    sumit();
    cout<<"Hi Arjun"<<endl;
//     sumit();
}
void anu(){
    cout<<"Hi Anu"<<endl;
    arjun();
}
int main()
{
    anu();
}