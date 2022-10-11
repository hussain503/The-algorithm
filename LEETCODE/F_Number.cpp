class Solution {
    public int fib(int n) {
        if (n < 2) {
            return n;
        }
        int a=0,b=0,c=1,i;
        for (i=2;i<=n;i++) 
        {
            a=b; 
            b=c; 
            c=a+b;
        }
        return c;
    }
}
