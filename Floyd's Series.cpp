// Aditya Jadhav
// 24070123005

#include <iostream>
using namespace std;

int main() {

    int n;
    int k=1;

    cout<<"Enter The Value for n: ";
    cin>>n;

    for(int i = 1; i <= n ; i++)
    {
        for(int j = 1; j <= i ; j++)
        {
            cout << k<<' ';
            k++ ;
            
        }
        cout << endl;
    }

    return 0;
}

// OUTPUT
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15