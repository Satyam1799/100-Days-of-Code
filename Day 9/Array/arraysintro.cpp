#include<iostream>
using namespace std;

void printArray(int arr[] , int size){
  cout<<endl<<"printing the array"<<endl;
//print the array
  for(int i=0 ; i<size ; i++){
	cout<<arr[i]<<" ";
	
  }
  cout<<endl<<"printing DONE"<<endl;
}



int main()
{
	//decalre
	int number[15];

   //accessing an array
   cout<<"Value at 10 index " <<number[10]<<endl;

  //cout<<"value at 20 index " <<number[20]<<endl;

  //initialising an array

  int second [3] ={5 , 7 , 11};

  //accesing an element;
 
  cout<<"value at 2 index " << second[2] <<endl;

  int third[15] = { 2,7};
  int n=15;
  
  printArray(third , 15);




//initialising all location with 0
  int fourth[10] = {0};
  n=15;
  
  printArray(fourth , 10);


//initialising all location with 1 [is not posssible niche jo kia h hmne]
  int fifth[10] = {1};
  n=15;
  
  printArray(fifth , 15);

  int fifthsize= sizeof(fifth)/sizeof(int);
  cout<<"Size if Fifth is "<< fifthsize<< endl;





   //ek aur endl lagane se output ke line ke bich gap aa jayaega

	cout<< endl<< "Everything is fine"<<endl;
 return 0;
}