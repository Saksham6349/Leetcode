class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        long long ans = 1;

        row.push_back(1);

        for (int r = 1; r <= rowIndex; r++) {
            ans = ans * (rowIndex - r + 1);
            ans = ans / r;
            row.push_back((int)ans);
        }

        return row;
    }
};