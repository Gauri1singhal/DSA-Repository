class Solution {
public:
    int zigZagArrays(int n, int l, int r) {
       const long long MOD = 1e9 + 7;

        int m = r - l + 1;

        vector<long long> up(m, 0), down(m, 0);

        // Length = 2
        for (int i = 0; i < m; i++) {
            up[i] = m - 1 - i;   // choose larger next value
            down[i] = i;         // choose smaller next value
        }

        for (int len = 3; len <= n; len++) {
            vector<long long> newUp(m, 0), newDown(m, 0);

            long long suffix = 0;
            for (int i = m - 1; i >= 0; i--) {
                newUp[i] = suffix;
                suffix = (suffix + down[i]) % MOD;
            }

            long long prefix = 0;
            for (int i = 0; i < m; i++) {
                newDown[i] = prefix;
                prefix = (prefix + up[i]) % MOD;
            }

            up = move(newUp);
            down = move(newDown);
        }

        long long ans = 0;
        for (int i = 0; i < m; i++) {
            ans = (ans + up[i] + down[i]) % MOD;
        }

        return (int)ans;
    }
};
