#include<iostream>
using namespace std;

void Alternate(int arr[], int n){
	int start=0;
	int next =start+1;

	for (int i = 0; i < n; i= i+2)
	{
		swap(arr[i], arr[i+1]);
	}
	
}

void printArray(int arr[] , int n){
	for(int i = 0 ; i<n ; i++){
		cout<<arr[i]<<" ";

	}
cout<<endl;
}


int main()
{

	int arr[6] = {1,2,3,4,5,6};

	Alternate(arr ,6);

	printArray(arr,6);
 return 0;
}