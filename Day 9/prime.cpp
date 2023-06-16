#include<iostream>
using namespace std;

// 1-> prime no.
// 0 -> not a prime no.
bool isPrime(int n){
	for(int i = 2; i < n ; i++){
		//divide ho gya 0 se to prime number hai
		if(n % i ==0){
			return 0;
			
		}
	return 1;	

	}
}

int main()
{
	int n;
	cin>>n;

	if(isPrime(n)){
		cout<<"Number is Prime"<<endl;
	}
	else{
		cout<<"Number is not prime"<<endl;
	}
	return 0;

}