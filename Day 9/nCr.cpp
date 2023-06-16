#include<iostream>
using namespace std;

int factorial(int n){
	int factorial=1;
	for(int i=1 ; i<=n ; i++){
		factorial=factorial * i;

	}
	return factorial;

}

int nCr(int n ,int r){
	int numerator = factorial(n);
	int denominator= factorial(r)*factorial(n-r);

	return numerator/denominator;

	


}

int main()
{
	int n , r;
	cin>>n >> r;

	cout<<"Answer is"<< nCr(n,r)<<endl;


 return 0;
}