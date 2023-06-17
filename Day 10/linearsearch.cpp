#include<iostream>
using namespace std;

bool search (int arr [] , int size , int key){

	for(int i = 0 ; i<size ; i++){
		if( arr[i] == key){
			return 1;
		}
	}
	return 0;
}

int main()
{

	int arr[10]={5 , 7 , 8 , 4 ,-3 , 0 , 11 , 10 , 3 , 1};

	cout<<" Enter the value to search for "<<endl;
	int key;
	cin>>key;

	bool found = search(arr , 10 , key);
		if (found){
			cout<<" Key is present "<<endl;
		}
		else{
			cout<<"Key is not present "<<endl;
		}
	
 return 0;
}