#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int cutRod(vector<int> &prize, int n)
{
    vector<vector<int>>dp(n, vector<int>(n+1, 0));
    for(int N=0; N<=n ; N++)
    {
        dp[0][N]=N * prize[0];
    }

    for(int ind=1; ind<n; ind++)
    {
        for(int N=0; N<=n ; N++)
        {
            int nottake = 0+dp[ind-1][N];
    int take = INT_MIN;
    int rodlength = ind + 1;

    if (rodlength <= N)
    {
        take = prize[ind] + dp[ind][N - rodlength];
    }

     dp[ind][N]=max(take, nottake);
        }
    }

    return dp[n - 1][n];
}

int main()
{
    vector<int> prize = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = prize.size();

    cout << "Maximum obtainable value: " << cutRod(prize, n) << endl;
    return 0;
}
