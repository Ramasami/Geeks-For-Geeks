// { Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

  public class GFG {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T > 0) {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            int key = sc.nextInt();
            Solution g = new Solution();
            System.out.println(g.binarysearch(arr, n, key));
            T--;
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    int binarysearch(int arr[], int n, int k) {
        // code here
        
        return find(arr,0,n,k);
        
    }
    
    int find(int arr[], int l, int r, int k) {
        // System.out.println(l + " " + r);
        if(l>=r)
            return -1;
        int m = l+(r-l)/2;
        if (arr[m] < k)
            return find(arr,m+1,r,k);
        else if (arr[m] > k) 
            return find(arr,l,m,k);
        else
            return m;
    }
}