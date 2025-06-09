class Solution {
public:
    int climbStairs(int n) {
     if(n<=3)return n;
     int a=1;
     int b=1;
     for(int i=2;i<=n;i++)
     {
        int res=a+b;
        a=b;
        b=res;
     }
     return b;
    }
};