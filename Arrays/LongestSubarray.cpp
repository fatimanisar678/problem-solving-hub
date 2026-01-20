#include<iostream>
#include<vector>
using namespace std;
int longestsubarraywithsumk( vector<int>a, long long k )
{
    int left=0;
    int right=0;
    int maxlength=0;
    long long sum= a[0];
    int n = a.size();
    
    while(right<n)
    {
        while(left <right && sum>k)
        {
            sum-=a[left];
            left++;
        }
        if(sum==k)
        {
            maxlength= max(maxlenghth,right-left+1);
        }
        right++;
        sum+=a[right];
    }
    return maxlength;
}