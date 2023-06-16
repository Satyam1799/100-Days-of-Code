#include<iostream>
using namespace std;

int arthimatic(int n){
	int arthimatic=1;
	for(int i=1 ; i<=n ; i++){
		arthimatic=arthimatic * i;

	}
	return arthimatic;
}

int ap(int n){
	int ans= 3* n + 7;
	return ans;
}

int main()
{
	int n;
	cin>>n;
	
	cout<<"ans is "<<ap(n) <<endl;

	
 return 0;
}

//khud se dimag lga ke krne aa gya🙂