#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;

	int a=0;
	int b=1;
	cout<<a<<" "<<endl;
    cout<<b<<" "<<endl;
	for(int i=1 ; i<=n ; i++){
		int nextnumber=a+b;
		cout<<nextnumber<<endl;

		a=b;
		b=nextnumber;
	}
 return 0;
}