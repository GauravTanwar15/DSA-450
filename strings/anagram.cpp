#include <iostream>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        unordered_map<string,vector<string>> mappings;
        int n = strs.size();
        if(n == 0) return anagrams;
        for(int i = 0;i < n;i++){
            string current = strs[i];
            sort(current.begin(),current.end());
            mappings[current].push_back(strs[i]);
        }
        for(auto it = mappings.begin();it != mappings.end();it++){
            anagrams.push_back(it->second);
        }
        return anagrams;
    }
int main(){

return 0;
}