#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    for(int i = 1 ; i < n*n ; i=i+n){
        for(int j = i ; j < i + n ; j++){
            cout << j << "\t";
        }
        cout << "\n";
    }
}