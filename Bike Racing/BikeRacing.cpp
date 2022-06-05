// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long buzzTime(long n, long m, long l, long h[], long a[])
    {
        long high = max(l,m);
        long low = 0;
        long ans = 0;
        while(low<=high) {
            long mid = (high + low)/2;
            long fast = 0;
            for(long i=0;i<n;i++) {
                long speed = h[i] + mid * a[i];
                if (speed > l)
                    fast+=speed;
            }
            if (fast >= m) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends