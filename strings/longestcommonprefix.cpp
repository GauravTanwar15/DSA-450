#include <iostream>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        string result = "";
        for(int i=0;i<first.length();i++)
        {
            if(first[i]==last[i]) result+=first[i];
            else{
                break;
            }
        }
        return result;
    }
};
int main(){

return 0;
}