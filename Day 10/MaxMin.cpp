#include<iostream>
using namespace std;

//int n means size of array //int num ia an array
int getMAX(int num[] , int n ) {
	int maxi  = INT_MIN;

	for(int i=0 ; i<n; i++){
		maxi = max(maxi , num[i]);
		//if(num[i]max){
			//ax = num[i];
		//}
	}
    //returniing max value
	return maxi;

}

int getMIN(int num[] , int n){
	int mini = INT_MAX;


	for(int i = 0 ;i<n ; i++){

		mini = min(mini , num [i]);
		//if(num[i]< min){
		//	min=num[i];
		//}

	}
	return mini;
}

int main()
{
	int size;
	cin>>size;

	int num[100]; 

	//taking input in array
	for(int i=0 ;  i<size ; i++){
	   cin>>num[i];

	}
	cout<< "Maximum Value is "<<getMAX(num , size)<<endl;

	cout<< "Maximum Value is "<< getMIN(num , size)<<endl;

 return 0;
}