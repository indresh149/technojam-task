#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>> matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> res ;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int min = 1000000;
                for(int k=0;k<m;k++)
                {
                    if(matrix[i][k]<min)
                        min = matrix[i][k];
                }
                int max = 0;
                for(int l=0;l<n;l++)
                {
                    if(matrix[l][j]>max)
                        max = matrix[l][j];
                }
                if ((max==min) && (max == matrix[i][j]))
                {
                    res.push_back(matrix[i][j]);
                }
            //cout<<min <<"A"<< max<<endl;
        }
        }
        return res;
    }
};

int main()
{
    Solution obj1;
    //int n,m;
    //int k;
   // int matrix[100][100][100];
    vector<vector<int>> V1 = {{3,7,8},{9,11,13},{15,16,17}};
    vector<int> V2 =obj1.luckyNumbers(V1);
    for(int i=0;i<V2.size();i++)
    {
        cout<<V2[i]<<" ";
    }
    
    return 0;

}