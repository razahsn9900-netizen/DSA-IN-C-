#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter x and y coordinates :";
    cin>>x>>y;
    if (x==0 && y==0)
    cout<<"The point is  at origin.";
    else if(x>0 && y>0)
    cout<<"The point lies in 1st Quadrant.";
    else if(x<0 && y>0)
    cout<<"The point lies in 2nd Quadrant.";
    else if(x<0 && y<0)
    cout<<"The point lies in 3rd Quadrant.";
    else
    cout<<"The point lies in 4th Quadrant.";
    return 0;
}