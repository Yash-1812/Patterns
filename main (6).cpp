#include <iostream>
using namespace std;

// 1 1 1 1
// 2 2 2
// 3 3
// 4

int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    for(int i = n ; i >= 1 ; i--){
        int count = 1;
        while(count <= i){
            cout << n - i + 1 << "\t";
            count = count + 1;
        }
        cout << "\n";
    }
}
