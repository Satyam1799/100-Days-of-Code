#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=2;
	while(i < n){
		if (n % i ==0){
			cout<<"Not a Prime Number"<<endl;
			return 0;
		
		}
		i=i+1;
	}
	cout<<"Prime Number"<<endl;
 return 0;
}