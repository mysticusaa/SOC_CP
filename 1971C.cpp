#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        // if c is between a and b and d is not - print YES
        // if d is between a and b and c is not - print YES
        // if both c and d are between a and b - print NO
        // if neither c or d are between a and b - print NO
        if (a > b){
            // assuming a is the bigger one
            if (c < a && c > b && (d > a || d < b)){
                cout << "YES \n";
            }
            if (d < a && d > b && (c > a || c < b)){
                cout << "YES \n";
            }
            if (c < a && c > b && d < a && d > b){
                cout << "NO \n";
            }
            if ((d > a || d < b) && (c > a || c < b)){
                cout << "NO \n";
            }
        }
        else if (a < b){
            // assuming b is larger
            if (c < b && c > a && (d > b || d < a)){
                cout << "Yes \n";
            }
            if (d < b && d > a && (c > b || c < a)){
                cout << "YES \n";
            }
            if (c < b && c > a && d < b && d > a){
                cout << "NO \n";
            }
            if ((d > b || d < a) && (c > b || c < a)){
                cout << "NO \n";
            }
        }
    }
}