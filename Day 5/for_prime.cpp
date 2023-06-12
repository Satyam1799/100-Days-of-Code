#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    bool isPrime = true; // Assume the number is prime initially

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false; // Number is divisible, not a prime
            break;
        }
    }

    if (isPrime)
        cout << "Prime number" << endl;
    else
        cout << "Not a prime number" << endl;

    return 0;
}
