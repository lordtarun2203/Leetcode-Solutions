class Solution {
public:
    int pivotInteger(int n) {
        int start = 1, end = n;
        while(start<=end){
            int mid = (start+end)/2;
            int sum1 = mid*(mid+1)/2;
            int sum2 = (n*(n+1)/2)-sum1+mid;
            if(sum1 == sum2)return mid;
            if(sum1<sum2)start = mid+1;
            else end = mid-1;
        }
        return -1;
    }
};