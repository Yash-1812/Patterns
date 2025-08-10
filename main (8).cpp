#include <iostream>
using namespace std;

// Floyd's Triangle
// 1 
// 2 3
// 4 5 6
// 7 8 9 10

int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int num = 1;
    for(int i = 1 ; i <= n ; i++){
        int count = 1;
        while(count <= i){
            cout << num << "\t";
            count++;
            num++;
        }
        cout << "\n";
    }
}
