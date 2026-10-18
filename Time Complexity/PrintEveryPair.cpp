#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4};
    int size = 4;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << numbers[i] << ", " << numbers[j] << endl;
        }
    }

    return 0;
}