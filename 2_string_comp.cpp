#include <iostream>
#include <vector>
using namespace std;

int main(){
    string input;
    cin >> input;
    vector<char> chars(input.begin(), input.end());
    int final_count = 0;
    int i = 0;
    while (i < chars.size()){
        char curr_char = chars[i];
        int count = 0;
        while (i < chars.size() && chars[i] == curr_char){
            i++;
            count++;
        }
        // putting the letter in the input array
        chars[final_count++] = curr_char;
        if (count > 1){
            // have to put the count in the array if the letter appears more than once
            for (char digit : to_string(count)){
                chars[final_count] = digit;
                final_count++;
            }
        }
    }
    return final_count;
}