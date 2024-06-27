#include <iostream>
using namespace std;

int main(){
    int n; // number of testcases
    cin >> n;
    for (int i = 0; i < n; i++){
        string a;
        cin >> a;
        string b;
        cin >> b;
        cout << b[0] << a[1] << a[2] << " " << a[0] << b[1] << b[2] << endl;
    }
}