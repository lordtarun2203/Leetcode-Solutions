class Solution {
public:
    int tribonacci(int n) {
        int res=0;
        int res1=0, res2=1,res3=1;
        if(n==1)
        {
            return res2;
        }
        else if(n==2)
        {
            return res2;
        }
        else if(n==3)
        {
            return res3+res2;
        }
        else
        {
            while(n>=3)
            {
                res=res1+res2+res3;
                res1=res2;
                res2=res3;
                res3=res;
                n--;

            }
            return res;
        }
        
    }
};