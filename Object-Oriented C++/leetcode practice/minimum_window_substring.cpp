#include <iostream>
#include <map>

using namespace std;

class Solution {
    public:
        string minWindow(string s, string t) {
            if (s.empty() || t.empty()) return "";

            map<char, int> counter;
            for (int i=0; i < t.length(); i++) {
                char c = t[i];
                if (counter[c] > 0){
                    counter[c]++;
                } else {
                    counter[c]=1;
                }
            }

            int i=0, j=0, count = counter.size();

            int left = 0, right = s.length()-1, min = s.length();

            bool found = false;

            while(j < s.length()) {
                char endChar = s[j++];
                if (counter.find(endChar) != counter.end()) {
                    counter[endChar] = counter[endChar]-1;
                    if (counter[endChar]==0) count -= 1;
                }
                if (count > 0) continue;

                while(count == 0) {
                    char startChar = s[i++];
                    if (counter.find(startChar) != counter.end()) {
                        counter[startChar] = counter[startChar]+1;
                        if (counter[startChar]>0) count += 1;
                    }
                }

                if ((j-i) < min) {
                    left = i;
                    right = j;
                    min = j - i;
                    
                    found = true;
                }
            }

            return !found ? "" : s.substr(left-1, min+1);
        }
};


int main() {
    Solution sol = Solution();

    cout << sol.minWindow("ABAACBAB", "ABC") << endl;

    return 0;
}