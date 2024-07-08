#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    if (x < 4){
        return 1;
    }
    else{
        int left = 1;
        int right = x/2;
        int ans;
        while(left <= right){
            int mid = (left + right)/2;
            if (x/mid >= mid){
                // x >= mid^2
                left = mid + 1;
                ans = mid;
            }
            else{
                // x < mid^2
                right = mid - 1;
            }
        }
        return ans;
    }
}