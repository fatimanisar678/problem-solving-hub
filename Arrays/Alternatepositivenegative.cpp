#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
      void rearrangeelemnets(vector<int>a)
      {
        int n= a.size();
        vector<int> ans(n, 0);
        int postIndex=0;
        int negIndex=1;
        for(int i=0 ; i<n ; i++)
        {
            if(a[i]<0)
            {
                ans[negIndex]=a[i];
                negIndex+=2;
            }
            else
            {
                ans[postIndex]=a[i];
                postIndex+=2;
            }
        }
        return ans;
      }
}