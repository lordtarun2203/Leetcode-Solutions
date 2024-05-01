class Solution {
public:
    string reversePrefix(string word, char ch) {
        string res1="";
        int i=0;
        string res2="";
        while(i<word.size()&&word[i]!=ch)
        {
            res1.push_back(word[i]);
            i++;
        }
        if(i==word.size())
        {
            return word;
        }
        res1.push_back(ch);
        reverse(res1.begin(),res1.end());
        for(int j=i+1;j<word.size();j++)
        {
            res1.push_back(word[j]);
        }
        
        return res1;

    }
};