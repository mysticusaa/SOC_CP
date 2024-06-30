#include <iostream>
using namespace std;

int main(){
    int a,c;
    cin >> a >> c;
    int a_ternary[20], c_ternary[20];
    int a_num = 0;
    int c_num = 0;
    for (int i = 0; i < 20; i++){
        a_ternary[i] = 0;
    }
    for (int i = 0; i < 20; i++){
        c_ternary[i] = 0;
    }
    while (a != 0){
        a_ternary[a_num] = a % 3;
        a = a/3;
        a_num++;
    }
    while (c != 0){
        c_ternary[c_num] = c % 3;
        c = c/3;
        c_num++;
    }
    // cout << a_num << c_num;
    // cout << a_ternary[1];
    // for (int i = 0; i < a_num; i++){
    //     cout << a_ternary[a_num - i -1];
    // }
    // cout << endl;
    // for (int i = 0; i < c_num; i++){
    //     cout << c_ternary[c_num - i - 1];
    // }
    // cout << endl;
    int ter_xor = 0;
    for (int i = max(c_num, a_num); i >= 0; --i){
        ter_xor = ter_xor*3 + (c_ternary[i] - a_ternary[i] + 3)%3;
    }
    cout << ter_xor;
}
