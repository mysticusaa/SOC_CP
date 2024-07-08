#include <iostream>
#include <vector>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
    int m = grid.size();         // Number of rows
    int n = grid[0].size();      // Number of columns
    int num = 0;
    int i = 0;
    int j = 0;

    while (i < m){
        // checking all the rows
        if (j >= n){
            i++;
            j = 0;
        }
        else if (grid[i][j] < 0){
            // negative number at 'i''j' - so we move to the next row
            num = num + (n - j);
            // cout << n-j << " negative numbers in row " << i+1 << endl;
            i++;
            j = 0;               
        }
        else {
            // found a non negative number - go to the next element in the same row
            j++;
        }
    }
    return num;
}

int main(){
    vector<vector<int>> input;
    int n;
    cout << "Number of rows and columns" << endl;
    cin >> n;
    for (int i = 0; i < n; i++){
        vector<int> row;
        for (int j = 0; j < n; j++){
            int element;
            cin >> element;
            row.push_back(element);
        }
        input.push_back(row);
    }

    int result = countNegatives(input);
    cout << result << endl;
}