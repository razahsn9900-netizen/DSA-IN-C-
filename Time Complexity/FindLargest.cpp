#include <iostream>
using namespace std;

int main() {
    int numbers[] = {12, 25, 7, 48, 31};
    int size = 5;
    int largest = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    cout << "Largest number: " << largest << endl;

    return 0;
}