#include "iostream"

using namespace std;

int binarySearch(int targetValue, int arr[], int size) {

    int lowerBound = 0, upperBound = size - 1;

    while (lowerBound <= upperBound) {
        int mid = lowerBound + (upperBound - lowerBound) / 2;

        if (targetValue == arr[mid]) {
            return mid;
        }
        if (targetValue > arr[mid]) {
            lowerBound = mid + 1;
        } else if (targetValue < arr[mid]) {
            upperBound = mid - 1;
        }
    }
    return -1;
}

int main() {

//    int arr[] = {0};

//    int targetValue;    

//    int size = sizeof(arr) / sizeof(arr[0]);


    return 0;
}

