#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    vector<int> input;
    int num;
    while (cin >> num){
        input.push_back(num);
    }
    int n = input.size();
    int left = 0;
    int right = n-1;
    while (left < right){
        int middle = (left + right)/2;
        if (input[middle] > input[middle + 1]){
            // peak on the left
            right = middle;
        }
        else{
            // peak on the right
            left = middle + 1;
        }
    }       
    return left;
}