#include<iostream>
using namespace std;

int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int totalSetBits = countSetBits(a) + countSetBits(b);
    cout << "Total number of set bits: " << totalSetBits << endl;

    return 0;
}
