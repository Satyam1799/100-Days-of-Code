#include <iostream>
#include <unordered_map>
using namespace std;

bool isStrobogrammatic(string num) {
    unordered_map<char, char> map;
    map['0'] = '0';
    map['1'] = '1';
    map['6'] = '9';
    map['8'] = '8';
    map['9'] = '6';

    int l = 0, r = num.length() - 1;
    while (l <= r) {
        if (map.find(num[l]) == map.end()) return false;
        if (map[num[l]] != num[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    string num = "69";
    bool isStrobogrammaticNumber = isStrobogrammatic(num);
    cout << "Is the number strobogrammatic? " << (isStrobogrammaticNumber ? "Yes" : "No") << endl;

    return 0;
}
