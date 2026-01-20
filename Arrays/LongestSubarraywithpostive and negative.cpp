#include<iostream>
#include<vector>

using namespace std;

int LSRwithpositiveandnegative(vector<int>a, long long k)
{
    map<int,int> presum;
    int n=a.size();
    int maxlength= 0;
    long long sum=0;

    for(int i=0; i<n ;i++)
    {
        sum +=[i];
        if(sum==k)
        {
            maxlength= max(maxlength, i+1);

        }
        int rem = sum-k;
        if(presum.find(rem)!==presum.end())
        {
            int length = i - presum[rem];
            maxlength= max(maxlength, length);
        }
        if(presum.find()== presum.end())
        {
            presum[sum]=i;
        }
    }
    return maxlength;

}