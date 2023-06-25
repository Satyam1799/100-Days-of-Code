#include<iostream>
using namespace std;

int firstOcc(int arr [], int n , int key){
	int start = 0;
	int end = n - 1;

	int mid = start + (end - start)/2;

	int ans = -1; 

	while(start<= end ){

		if(arr[mid] == key){
			ans = mid;
			end = mid -1;
		}

		else if (key> arr[mid]){
			start= mid + 1;
		}

		else if( key < arr[mid]){
			end = mid -1;
		}
		mid = start + (end - start)/2;

	}
	return ans;
	
}

int lastOcc(int arr[] , int n , int key){
	int start = 0;
	int end = n - 1;

	int mid = start + (end - start)/2;

	int ans = -1; 

	while(start<= end ){

		if(arr[mid] == key){
			ans = mid;
			start= mid + 1;
		}

		else if (key> arr[mid]){
			start= mid + 1;
		}

		else if( key < arr[mid]){
			end = mid -1;
		}
		mid = start + (end - start)/2;

	}
	return ans;

}

int main()
{

	int even[6] = {1, 2, 3 , 3, 3 ,3};

	int totalocc = lastOcc(even, 6, 3) - firstOcc(even, 6, 3) + 1;

	cout<<"Number of occerrance " << totalocc<< endl;
	
 return 0;
} 