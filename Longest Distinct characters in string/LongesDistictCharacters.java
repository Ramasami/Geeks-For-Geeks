//User function Template for Java

class LongesDistictCharacters{
    static int longestSubstrDistinctChars(String S){
        int l = -1;
        int length = 0;
        int n = S.length();
        int[] a = new int[]{-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
        for(int r=0;r<n;r++) {
            int c = S.charAt(r) - 'a';
            if (a[c]>=l) {
                l = a[c];
            }
            a[c] = r;
            length = Math.max(r-l, length);
        }
        return length;

    }
}