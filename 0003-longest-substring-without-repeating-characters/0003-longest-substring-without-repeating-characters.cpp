class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int ans = 0;
        int count[256] = {0};

        for (int end = 0; end < s.length(); end++) {
            count[s[end]]++;

            while (count[s[end]] > 1) {
                count[s[start]]--;
                start++;
            }

            ans = max(ans, end - start + 1);
        }

        return ans;
    }
};