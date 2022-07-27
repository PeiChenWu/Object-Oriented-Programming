#include <iostream>

using namespace std;

class Solution {
    public:
        void reverse_string(string &s) {
            int left = 0;
            int right = s.length() - 1;

            while(left < right) {
                swap(s[left++], s[right--]);
            }
        }

    private:
        void swap(char &left, char &right) {
            char temp = left;
            left = right;
            right = temp;
        }
};


int main() {
    string s = "1234";

    Solution sol = Solution();

    cout << s << endl;

    sol.reverse_string(s);

    cout << s << endl;

    return 0;
}

