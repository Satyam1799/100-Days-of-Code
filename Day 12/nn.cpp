#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}


int main() { 

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 6);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);

    cout << " Index of 14 is " << oddIndex << endl;


    return 0;
}
#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {
	int start = 0;
	int end = n - 1;

	int ans = -1;

	while (start <= end) {
		int mid = start + (end - start) / 2;

		if (arr[mid] == key) {
			ans = mid;
			end = mid - 1;
		}
		else if (key > arr[mid]) {
			start = mid + 1;
		}
		else if (key < arr[mid]) {
			end = mid - 1;
		}
	}

	return ans;
}

int lastOcc(int arr[], int n, int key) {
	int start = 0;
	int end = n - 1;

	int ans = -1;

	while (start <= end) {
		int mid = start + (end - start) / 2;

		if (arr[mid] == key) {
			ans = mid;
			start = mid + 1;
		}
		else if (key > arr[mid]) {
			start = mid + 1;
		}
		else if (key < arr[mid]) {
			end = mid - 1;
		}
	}

	return ans;
}

int totalOcc(int arr[], int n, int key) {
	int firstOccur = firstOcc(arr, n, key);
	int lastOccur = lastOcc(arr, n, key);
	int total = lastOccur - firstOccur + 1;
	return total;
}

int main() {
	int even[7] = { 1, 2, 3, 3, 3, 3, 6 };
	cout << "Number of occurrences: " << totalOcc(even, 7, 3) << endl;

	return 0;
}
