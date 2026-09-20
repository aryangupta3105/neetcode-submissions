class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {

        int n = triplets.size();

        vector<int> f, s, t;

        for(int i = 0; i < n; i++) {
            f.push_back(triplets[i][0]);
            s.push_back(triplets[i][1]);
            t.push_back(triplets[i][2]);
        }

        bool ok1 = false, ok2 = false, ok3 = false;

        for(int i = 0; i < 3; i++) {

            int x = target[i];

            for(int ii = 0; ii < n; ii++) {

                // Ignore invalid triplets
                if(f[ii] > target[0] ||
                   s[ii] > target[1] ||
                   t[ii] > target[2])
                    continue;

                if(i == 0 && f[ii] == x)
                    ok1 = true;

                else if(i == 1 && s[ii] == x)
                    ok2 = true;

                else if(i == 2 && t[ii] == x)
                    ok3 = true;
            }
        }

        return ok1 && ok2 && ok3;
    }
};