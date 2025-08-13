#include <iostream>
#include <vector>
#include <string>

using namespace std;

int lcs(string s, string t) {
    int n = s.size();
    int m = t.size();

    
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i - 1] == t[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }

    return dp[n][m];
}

int main() {
    string s = "abcde";
    string t = "ace";

    cout << "String 1: " << s << endl;
    cout << "String 2: " << t << endl;

    int length = lcs(s, t);
    cout << "Length of LCS: " << length << endl;

    return 0;
}
