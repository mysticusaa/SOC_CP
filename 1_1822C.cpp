#include <iostream>
using namespace std;

int main(){
    unsigned long int t;
    cin >> t;
    
    for (unsigned long int i = 0; i < t; i++){
        unsigned long long int n;
        cin >> n;
        unsigned long long int base = 26;
        if (n == 4){
            cout << base << endl;
        }
        else if (n > 4){
            unsigned long long int base = 26;
            // unsigned long long int k = 5;
            for (int i = 5; i <= n; i++){
                base += 2*i + 1;
            }
            cout << base << endl;
        }

    }
}