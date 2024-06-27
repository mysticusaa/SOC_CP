#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long double n;
    cin >> n;
    if (n > 0){
    long double x = log2(n);
    long double y = floor(x);
    if (x == y){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    }
    else {
        long double z = -n;
        long double x = log2(z);
        long double y = floor(x);
        if (x == y){
            cout << "true" << endl;
        }
        else{
            cout << "false" << endl;
        }
    }
}