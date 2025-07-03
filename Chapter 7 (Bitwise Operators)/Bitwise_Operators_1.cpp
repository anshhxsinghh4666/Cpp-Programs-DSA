#include <iostream>
using namespace std;

int main() {
    int a = 4;
    int b = 8;
    int i = 2;

    cout << "Bitwise AND : " << (a & b) << endl;

    cout << "Bitwise OR : " << (a | b) << endl;

    cout << "Bitwise XOR : " << (a ^ b) << endl;

    cout << "Bitwise Left shift (<<) : " << (a << 1) << endl;
    cout << "Bitwise Left shift (<<) : " << (a << i) << endl;

    cout << "Bitwise Right shift (>>) : " << (b >> 1) << endl;
    cout << "Bitwise Right shift (>>) : " << (b >> i) << endl;

    return 0;
}