#include<iostream>
#include<vector>
using namespace std;
class Solution{
 public:
     string twosumexists(vector<int> &a , int target)
     {
        map<int , int>mpp;
        for(int i=0; i<n ;i++)
        {
            int a= a[0];
            int extra= target-a;
            if(mpp.find(extra)!== mpp.end())
            {
                return "Yes";
            }
            mpp[a[i]]=i;


        }
        return "NO";
     }



}