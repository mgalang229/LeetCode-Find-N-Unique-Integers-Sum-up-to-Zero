class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n);
        for (int i = 0; i < (n % 2 == 0 ? n : n - 1); i++) {
            if (i % 2 == 0) {
                ans[i] = i + 1;
            } else {
                ans[i] = -i;
            }
        }
        if (n % 2 == 1) {
            ans[n-1] = 0;
        }
        return ans;
    }
};
