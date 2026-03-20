#include <iostream>
#include <climits> // for INT_MAX and INT_MIN
using namespace std;
/**
 * Function: getMin
 * ----------------
 * Returns the minimum element in the array
 */
int getMin(const int arr[], int n) {
    int minVal = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}
/**
 * Function: getMax
 * ----------------
 * Returns the maximum element in the array
 */
int getMax(const int arr[], int n) {
    int maxVal = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[100];

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Maximum Value: " << getMax(arr, size) << endl;
    cout << "Minimum Value: " << getMin(arr, size) << endl;

    return 0;
}