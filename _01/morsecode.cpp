#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<set>


class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string code[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        for(string each : words)
        {
            string Morsecoded = "";
            for(char ch : each)
            {
                Morsecoded += code[(ch - 'a')];
            }
            s.insert(Morsecoded);
        }
        return s.size();
    }
};
int main()
{   Solution C1;
    string words;
    vector<string> V1;
    V1.push_back("gin");
    V1.push_back("zen");
    V1.push_back("gig");
    V1.push_back("msg");
    
   cout<<C1.uniqueMorseRepresentations(V1);
    return 0;

}
