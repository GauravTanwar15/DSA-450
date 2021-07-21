#include <iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> subsets;
        vector<int> subset;
        subsetsWithDupWorker(nums, subsets, subset, 0);
        return subsets;
    }
private:
    void subsetsWithDupWorker(const vector<int>& nums, vector<vector<int>>& subsets, vector<int>& subset, int begin) {
        subsets.push_back(subset);
        for (int i = begin; i < nums.size(); i++) {
            if (i != begin && nums[i] == nums[i-1]) continue;
            subset.push_back(nums[i]);
            subsetsWithDupWorker(nums, subsets, subset, i+1);
            subset.pop_back();
        }
    }
};
int main(){

return 0;
}