// Aditya Jadhav
// 24070123005

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        cout << string(n - i, ' '); 

        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

// OUTPUT
// Enter number of rows: 5
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 