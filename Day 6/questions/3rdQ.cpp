#include<iostream>
using namespace std;
int main()
{
	                       //i+=2 means i = i+2
	for( int i= 0 ; i <=15 ; i +=2){
		cout<<i<<" ";
		
		if (i&1){
			continue;
		}
		i++;
	}
 return 0;
}