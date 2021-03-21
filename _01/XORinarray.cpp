#include<iostream>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        int p =0;
        int i=0;
        int res =0;
        while(i<n)
        {
            
            p = start + (2*i);
            res = res^p;
            //cout<<p<<"A"<<res<<endl;
            i++;
        }
     return res;   
    }
};

int main (){
    Solution obj1;
    int n;
    int start;
    cout<<"n = ";
    cin>>n;
    cout<<"start = ";
    cin>>start;
   cout<< obj1.xorOperation( n,start);
    return 0;

}