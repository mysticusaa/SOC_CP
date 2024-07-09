#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    vector<int> nums1;
    for (int i = 0; i < m; i++){
        int num;
        cin >> num;
        nums1.push_back(num);
    }
    vector<int> nums2;
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        nums2.push_back(num);
    }
    vector<int> nums;
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < m && j < n){
        if (nums1[i] <= nums2[j]){
            // nums1[i] is less - so it goes into the merged array first 
            nums.push_back(nums1[i]);
            // update i, because this element is already in the merged array
            i++;
            k++;
        }
        else{
            // nums2[j] is less - so it goes into the merged array
            nums.push_back(nums2[j]);
            j++;
            k++;
        }
    }
    while (i < m){
        nums.push_back(nums1[i]);
        i++;
    }
    while (j < n){
        nums.push_back(nums2[j]);
        j++;
    }
    int size = nums.size();
    if (size % 2 == 1){
        double ans = nums[(size-1)/2];
        return ans;
    }
    else{
        double el1 = nums[(size/2) - 1];
        double el2 = nums[size/2];
        double ans = (el1 + el2)/2;
        return ans;
    }
}