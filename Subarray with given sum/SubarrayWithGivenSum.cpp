// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int l = 0;
        int r = 1;
        int sum = arr[0];
        while (true) {
            if (r > n)
                break;
            else if (sum > s) {
                sum-=arr[l];
                l++;
            } else if (sum < s && r!=n) {
                sum+=arr[r];
                r++;
            } else {
                break;
            }
        }
        if (sum == s)
            return vector<int>{l+1,r};
        else
            return vector<int>{-1};
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends