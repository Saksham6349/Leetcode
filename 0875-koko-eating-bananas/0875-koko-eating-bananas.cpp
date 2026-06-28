int findMax(vector<int> &piles){
    int maxi=INT_MIN;
    int n = piles.size();
    for(int i=0;i<n;i++){
        maxi=max(maxi,piles[i]);
    }
    return maxi;
}
long long cth(vector<int> &v,int hrs){
    long long th=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        th+=ceil((double)v[i]/(double)hrs);
    }
    return th;
}
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=findMax(piles);
        while(low<=high){
            int mid=low+(high-low)/2;
            long long th=cth(piles,mid);
            if(th<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};