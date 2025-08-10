#include <iostream>
using namespace std;

// 1
// 2 2
// 3 3 3
// 4 4 4 4

int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    for(int i = 1 ; i <= 4 ; i++){
        int start = 1;
        while(start <= i){
            cout << i << "\t";
            start = start + 1;
        }
        cout << "\n";
    }
        
    
}
