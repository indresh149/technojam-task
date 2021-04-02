#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int i=0;
        int j=0;
        while(i<word1.length() && j<word2.length())
        {
            res=res+word1[i]+word2[j];
            i++;
            j++;
        }
        while(j<word2.length())
        {
            res=res+word2[j];
            j++;
        }
        while(i<word1.length())
        {
            res=res+word1[i];
            i++;
        }
    
    return res;
    }
};
int main()
{
    Solution obj1;
    string word1="abc";
    string word2="pqr";
    string result=obj1.mergeAlternately(word1,word2);
    cout<<result;
    return 0;
}