class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int low=0;
        int high=n-1;
        int index=n-1;
        while(low<=high){
            if(abs(nums[low])>abs(nums[high])){
                ans[index]=nums[low]*nums[low];
                low++;
            }
            else{
                ans[index]=nums[high]*nums[high];
                high--;
            }
            index--;
        }
        return ans;
    }
};