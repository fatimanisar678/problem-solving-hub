#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution{
 public:
     string twosumexists(vector<int> &v , int target)
     {
        map<int,int>mpp;
        int n = v.size();
        for(int i=0; i<n ;i++)
        {
            int a= v[0];
            int extra= target-a;
        if(mpp.find(extra)!= mpp.end())
            {
                return "Yes";
            }
            mpp[v[i]]=i;


        }
        return "NO";
     }



};