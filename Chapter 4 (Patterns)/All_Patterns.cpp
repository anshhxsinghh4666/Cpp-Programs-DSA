// PATTERN PRACTICE :

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N : ";
    cin >> n;


    // SQUARE PATTERNS :

    cout << "Pattern 1 : " << endl;
    /*
    1  2  3  4
    1  2  3  4
    1  2  3  4
    1  2  3  4
    ....   n times... */

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 2 : " << endl;
    /* 
    *  *  *  *
    *  *  *  *
    *  *  *  *
    *  *  *  *
    ....   n times... */

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 3 : " << endl;
    /* 
    a  b  c  d
    a  b  c  d
    a  b  c  d
    a  b  c  d
    ....   n times... */

    for (int i = 0; i < n; i++) {
        char alpha = 'a';
        for (int j = 0; j < n; j++) {
            cout << alpha << ' ';
            alpha++;
        }
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 4 : " << endl;
    /*
    1  2  3  4
    5  6  7  8  
    9  10  11  12 
    13  14  15  16  
    ....   n times..  */

    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 5 : " << endl;
    /*
    a  b  c  d 
    e  f  g  h 
    i  j  k  l
    m  n  o  p 
    ....   n times...*/

    char alp = 'a';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << alp << " ";
            alp++;
        }
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 6 : " << endl;
    /*
    *  -> i=0 so i+1 i.e 1 star is printed
    *  *
    *  *  *
    *  *  *  *  
    ....   n times... */

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {  // can also use j<=i
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 7 : " << endl;
    /*
    1
    2  2
    3  3  3
    4  4  4  4 
    ....   n times...*/

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 8 : " << endl;
    /*
    A
    B  B
    C  C  C
    D  D  D  D 
    ....   n times... */

    char alp2 = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << alp2 << " ";
        }
        cout << endl;
        alp2++;
    }
    cout << endl;


    cout << "Pattern 9 : " << endl;
    /*
    1
    1  2
    1  2  3
    1  2  3  4 
   ....   n times... */

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << j + 1 << ' ';
        }
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 10 : " << endl;
    /*
    1
    2  1
    3  2  1
    4  3  2  1 
    ....   n times... */

    for (int i = 0; i <= n; i++) {
        for (int j = i; j > 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 11 : " << endl;
    /*
    1
    2  3
    4  5  6 
    7  8  9  10
    ....   n times... */

    int z = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << z << " ";
            z++;
        }
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 12 : " << endl;
    /*
    A
    B  A
    C  B  A
    D  C  B  A
    ....   n times... */

    for (int i = 0; i <= n; i++) {
        char ch = 'A' + (i - 1);
        for (int j = i; j > 0; j--) {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 13 : " << endl;
    /*
    A  A  A  A
       B  B  B
          C  C
             D
    ....   n times... */
    char alp3 = 'A';
    for (int i = 0; i < n; i++) {

        // Spaces :
        for (int k = 0; k < i; k++) {
            cout << "  ";
        }

        // Alphabets :
        for (int j = n; j > i; j--) {
            cout << alp3 << " ";
        }
        alp3++;
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 14 : " << endl;
    /*
    1  1  1  1
       2  2  2
          3  3
             4  
    ....   n times... */

    for (int i = 0; i < n; i++) {

        // Spaces :
        for (int k = 0; k < i; k++) {
            cout << "   ";
        }

        // Numbers :
        for (int j = 0; j < n - i; j++) {
            cout << i + 1 << "  ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 15 : " << endl;
    /*
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
   ....   n times...  */

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int k = 0; k < n - i - 1; k++) {
            cout << "  ";
        }
        // Print increasing numbers
        for (int j = 1; j <= i + 1; j++) {
            cout << j << " ";
        }
        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "Pattern 16 : " << endl;
    /*
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *   */

    // Top half
    for (int i = 0; i < n; i++) {
        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << "*";
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half
    for (int i = n - 2; i >= 0; i--) {
        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << "*";
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

