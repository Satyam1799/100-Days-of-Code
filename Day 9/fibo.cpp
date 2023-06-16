#include<iostream>
using namespace std;

void fibonacci(int num){
	int num1 = 0 , num2 = 1;
	cout << num1 << " ";

	for(int i = 1 ; i <= num ; i++){
		int nextnumber = num1 + num2;
		num1 = num2;
		num2 = nextnumber;

		cout << num1 << " ";

		
	}
}

int main()
{
	int n;
	cin >> n;

	fibonacci(n);

	return 0;
}
