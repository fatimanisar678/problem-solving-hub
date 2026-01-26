#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
      int maxprofit(vector<int>a)
      {
        int profit=0;
        int min=a[0];
        int n= a.size();
        for(int i=1; i<n ; i++)
        {
            int cost= a[i]-min;
             profit= max(cost, profit);
             min = min(min, ar[i]);

        }
        return profit;

      }
}
