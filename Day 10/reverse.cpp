#include<iostream>
using namespace std;

//initialising the array
void reverse(int arr[] , int n ){
	int start= 0;
	int end = n-1;

	while(start<=end){

		//strat aur end ke array ko swap krna h
		swap(arr[start] , arr[end]);
		start++;
		end--;
	}
}
//printing the array
void printArray(int arr[], int n ){
	for(int i = 0 ; i<n ; i++){
		cout<< arr[i]<< " ";
	}
	cout<<endl;
}

int main()
{
//hmesa array ke element ko angular bracket me rkhna h {}
	int arr[6]={1,2,3,4,5, 6};
	int brr[5]={5,4,3,2,1};

	reverse(arr , 6);
	reverse(brr, 5);

	printArray(arr, 6);
	printArray(brr,5);


 return 0;
}