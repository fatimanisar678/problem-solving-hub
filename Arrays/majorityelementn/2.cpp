#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int majorityelement(vector<int>&arr)
    {
        int n=arr.size();
        //Moore's Voting Algorithm
        int cnt=0;
        int element;
        for(int i=0; i<n ;i++)
        {
            if(cnt ==0 )
            {
                cnt=1;
                element= arr[i];
            }
            if(arr[i]==element ){
                cnt++;
            }
            else {
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0 ; i<n ;i++)
        {
            if(arr[i]==element)
            {
                cnt1++;
            }
        }
        if(cnt1>n/2)
        {
            return element;
        }
        return -1;

    }
    
};