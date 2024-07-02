#include <iostream>
using namespace std;

string gcdOfStrings(string str1, string str2){
    int m = str1.length();
    int n = str2.length();
    if (str1 + str2 != str2 + str1){
        return NULL;
    }
    else{
        int len;
        for (int i = 1; i <= min(m, n); i++){
            if (m%i == 0 && n%i == 0){
                len = i;
            }
        }
        // cout << len;
        string ans;
        for (int i = 0; i < len; i++){
            ans += str1[i];
        }
        return ans;
    }
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    string answer = gcdOfStrings(s1, s2);
    cout << answer << endl;
}