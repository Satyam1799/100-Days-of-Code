#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int noteCount, denomination;

    cout << "Currency Notes:\n";

    switch (amount) {
        case 2000:
            noteCount = amount / 2000;
            cout << "2000 Rupee Notes: " << noteCount << endl;
            
        case 500:
            noteCount = amount / 500;
            cout << "500 Rupee Notes: " << noteCount << endl;
            
        case 200:
            noteCount = amount / 200;
            cout << "200 Rupee Notes: " << noteCount << endl;
           
        case 100:
            noteCount = amount / 100;
            cout << "100 Rupee Notes: " << noteCount << endl;
         
        case 50:
            noteCount = amount / 50;
            cout << "50 Rupee Notes: " << noteCount << endl;
            
        case 20:
            noteCount = amount / 20;
            cout << "20 Rupee Notes: " << noteCount << endl;
         
        case 10:
            noteCount = amount / 10;
            cout << "10 Rupee Notes: " << noteCount << endl;
            
        case 5:
            noteCount = amount / 5;
            cout << "5 Rupee Coins: " << noteCount << endl;
            amount %= 5;
        case 1:
            noteCount = amount / 1;
            cout << "1 Rupee Coins: " << noteCount << endl;
  
            break;
        default:
            cout << "Invalid amount!" << endl;
            break;
    }

    return 0;
}
