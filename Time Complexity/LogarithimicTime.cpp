#include <iostream>
using namespace std;

int main() {
    int numbers[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int target = 12;
    int left = 0;
    int right = 7;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (numbers[middle] == target) {
            cout << "Found at index " << middle << endl;
            return 0;
        } else if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    cout << "Not found" << endl;
    return 0;
}