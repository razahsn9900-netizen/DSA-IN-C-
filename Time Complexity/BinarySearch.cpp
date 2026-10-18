#include <iostream>
using namespace std;

int main() {
    int numbers[] = {3, 8, 14, 21, 29, 35, 42, 50};
    int target = 35;
    int left = 0;
    int right = 7;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (numbers[middle] == target) {
            cout << "Found at index " << middle << endl;
            return 0;
        }

        if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    cout << "Not found" << endl;
    return 0;
}