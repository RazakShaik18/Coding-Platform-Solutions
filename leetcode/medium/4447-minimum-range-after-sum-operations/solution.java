class Solution {
    public int minRange(int a, int b, int c) {
        int mx = Math.max(a,Math.max(b,c));
        int mn = Math.min(a,Math.min(b,c));
        int mid = a+b+c-mx-mn;
        return Math.min(mx-mn,mid);
    }
}