#include<iostream>
#include<vector>
using namespace std;
class Solution{
  public:
     
  int maximumsum(vector<int>&arr )
  {
    //Kadan's Algorithm
    int  maxsum= INT_MIN;
    int sum=0;
    for(int i=0 ; i<arr.size() ;i++)
    {
        sum+=arr[i];
       maxsum= max(maxsum, sum);
        if(sum<0)
        {
            sum=0;
        }
         return maxsum;
    }
  }
};