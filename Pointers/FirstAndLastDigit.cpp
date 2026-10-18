#include<iostream>
using namespace std;
// void means this function does not return a value
void showFirstAndLastDigit(int number){
    if (number<0){
        number = -number; // Make a negative number positive
    }
    int lastDigit = number%10;// Remainder gives the last digit
    int firstDigit = number;
    // Remove the last digit repeatedly until one digit remains
    while (firstDigit >= 10){
        firstDigit /= 10;
    }
    cout<<"First Digit = "<<firstDigit<<endl;
    cout<<"Last Digit = "<<lastDigit<<endl;
}
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    showFirstAndLastDigit(number);
    return 0;
}