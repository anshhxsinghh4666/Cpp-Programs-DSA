// Binary Conversion from n to mth number :

#include <iostream>
using namespace std;

// Function Decalaration :
int decToBin(int n);

// Function Call :
int main() {
    int n, m;
    cout << "Enter Starting Value : ";
    cin >> n;
    cout << "Enter Ending Value : ";
    cin >> m;
    cout << "Binary Conversion from " << n << " to " << m << " : " << endl;
    for (int i = n; i <= m; i++) {
        cout << decToBin(i) << endl;
    }

    return 0;
}

// Function Definition :
int decToBin(int n) {
    int sum = 0;
    int i = 0;

    while (n > 0) {
        int r = n % 2;
        sum += r * pow(10, i);
        n = n / 2;
        i++;
    }
    return sum;
}