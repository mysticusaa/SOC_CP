#include <iostream>
using namespace std;

int main(){
    int n;              // number of testcases
    cin >> n;
    for (int i = 0; i < n; i++){
        int length;
        cin >> length;
        int u_count = 0;
        int d_count = 0;
        string sequence;
        cin >> sequence;
        for (char c : sequence){
            if (c == 'U'){
                u_count++;
            }
            else{
                d_count++;
            }
        }
        if (u_count % 2 == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}