class Solution {
public:
    void solve(vector<string>& ans, int n, string temp, int open, int close) {
        if (temp.size() == 2 * n) {
            ans.push_back(temp);
            return;
        }

        if (open < n) {
            solve(ans, n, temp + '(', open + 1, close);
        }

        if (close < open) {
            solve(ans, n, temp + ')', open, close + 1);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(ans, n, "", 0, 0);
        return ans;
    }
};