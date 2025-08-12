#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int f(int ind, int N, vector<int> &prize, vector<vector<int>>&dp)
{
    if (ind == 0)
    {
        return N * prize[0];
    }
    if(dp[ind][N]!=-1) return dp[ind][N];

    int nottake = f(ind - 1, N, prize, dp);
    int take = INT_MIN;
    int rodlength = ind + 1;

    if (rodlength <= N)
    {
        take = prize[ind] + f(ind, N - rodlength, prize, dp);
    }

    return dp[ind][N]=max(take, nottake);
}

int cutRod(vector<int> &prize, int n)
{
    vector<vector<int>>dp(n, vector<int>(n+1, -1));
    return f(n - 1, n, prize, dp);
}

int main()
{
    vector<int> prize = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = prize.size();

    cout << "Maximum obtainable value: " << cutRod(prize, n) << endl;
    return 0;
}
