#include<iostream>
using namespace std;
int main()
{
	int arr[5]={2 , 7 , 1 , -4 , 11};

	int sum=0;

	for(int i = 0 ; i< 5 ; i++){
		sum = sum + arr[i];
	}
	cout<<"sum of array is "<< sum <<endl;
 return 0;
}

//