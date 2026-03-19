#include<iostream>
#include <algorithm>  // for swap
using namespace std;
/**
 * Function: reverseArray
 * ----------------------
 * Reverses the given array in-place.
 * 
 * @param arr : Input array
 * @param n   : Size of array
 */
void reverse(int arr[], int n){
int start= 0;
int end = n-1;
while(start<=end) {                  // cleaner condition
swap(arr[start], arr[end]);
start++;
end--;
}
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
    cout << arr[i] <<  " ";
    }
    cout << endl;
}
int main() {
    int arr[6] = {1,2,3,4,5,6};
    int brr[5] = {11,10,9,8,7};
    reverse(arr, 6);
    reverse(brr, 5);
    printArray(arr, 6);
    printArray(brr, 5);
return 0;
}

