#include<iostream>
using namespace std;

//funtion signature 
void printcounting (int n){

	//function body 
	for(int i = 1 ; i <= n ; i++){
		cout << i << " ";
	}
	cout << endl;

}

int main()
{
	int n;
	cin>>n;
    
	//funtion call
	printcounting(n);

 return 0;
}