class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int max_num=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                count+=1;
                if(max_num<count)
                {
                    max_num=count;
                }
            }
            else if(s[i]==')')
            {
                count-=1;
            }
        }
        return max_num;
    }
};