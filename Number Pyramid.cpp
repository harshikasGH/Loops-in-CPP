// Aditya Jadhav
// 24070123005

#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

// OUTPUT
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 