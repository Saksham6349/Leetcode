class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int index = 0;
        int cnt_max = 0;

        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1)
                    cnt++;
            }

            if (cnt > cnt_max) {
                cnt_max = cnt;
                index = i;
            }
        }

        return {index, cnt_max};
    }
};