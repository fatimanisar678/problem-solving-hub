#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int f(int ind, int N, vector<int> &prize)
{
    if (ind == 0)
    {
        return N * prize[0];
    }

    int nottake = f(ind - 1, N, prize);
    int take = INT_MIN;
    int rodlength = ind + 1;

    if (rodlength <= N)
    {
        take = prize[ind] + f(ind, N - rodlength, prize);
    }

    return max(take, nottake);
}

int cutRod(vector<int> &prize, int n)
{
    return f(n - 1, n, prize);
}

int main()
{
    vector<int> prize = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = prize.size();

    cout << "Maximum obtainable value: " << cutRod(prize, n) << endl;
    return 0;
}
