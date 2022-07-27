#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
    public:
        int solve(string A, string B);
};

int Solution::solve(string A, string B) {
    int table[A.length()+1][B.length()+1];

    for (int i=0; i <= A.length(); ++i) {
        table[i][0] = i;
    }

    for (int i=0; i <= B.length(); ++i) {
        table[0][i] = i;
    }

    for (int row=1; row<=A.length(); ++row) {
        for (int col=1; col<=B.length(); ++col) {
            if (A[row-1] == B[col-1]){
                table[row][col] = table[row-1][col-1];
            } else {
                table[row][col] = min({table[row-1][col-1], table[row][col-1], table[row-1][col]})+1;
            }
        }
    }
    return table[A.length()][B.length()];
};




int main() {

    Solution sol = Solution();

    cout << sol.solve("Anshuman", "Antihuman") << endl;


    return 0;
}