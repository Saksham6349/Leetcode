class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int org=x;
        long long rev=0;
        while(x>0){
            rev=rev*10+x%10;
            x/=10;
        }
        return org==rev;

        // string s = to_string(x);
        // int left=0;
        // int right=s.length()-1;
        // while(left<right){
        //     if(s[left]!=s[right]){
        //         return false;
        //     }
        //     left++;
        //     right--;

        // }
        // return true;
    }
};