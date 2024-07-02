#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    int m = arr.size();
    int num[2001] = {0};
    for (int i = 0; i < m; i++){
        int j = arr[i];
        num[j+1000]++;
    }
    for (int i = 0; i < 2001; i++){
        if (num[i] == 0){
            continue;
        }
        for (int j = i+1; j < 2001; j++){
            if (num[i] == num[j] && i != j && num[i] != 0){
                return false;
            }
        }
    }
    return true;
}

