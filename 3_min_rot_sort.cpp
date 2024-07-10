#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    while (i < n-1 && nums[i] < nums[i+1]){
        i++;
    }
    if (i < n-1){
        // if i isnt (n-1)
        return nums[i+1];
    }
    else{
        // i = n-1 - the min element has to be nums[0]
        return nums[0];
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> input;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        input.push_back(num);
    }
    int result = findMin(input);
    cout << result << endl;
}