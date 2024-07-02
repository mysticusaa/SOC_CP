#include <iostream>
using namespace std;


string mergeAlternately(string word1, string word2) {
    string merged;
    int m = word1.length();
    int n = word2.length();
    int i = 0, j = 0;
    while (i < m && j < n){
        merged += word1[i++];
        merged += word2[j++];
    }
    while (i < m){
        merged += word1[i++];
    }
    while (j < n){
        merged += word2[j++];
    }
    return merged;
}

int main(){
    string w1, w2;
    cin >> w1 >> w2;
    string ans = mergeAlternately(w1, w2);
    cout << ans;
}