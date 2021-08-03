#include <iostream>
using namespace std;
 bool helper(TreeNode *root,long long high,long long low)
    {
        if(!root)
        {
            return true;
        }
        long long x=(long long)root->val;
        if(x<low || x>high)
        {
            return false;
        }
        return helper(root->left,x-1,low) && helper(root->right,high,x+1);
    }
    bool isValidBST(TreeNode* root) 
    {
        return helper(root,INT_MAX,INT_MIN);
    }
};
int main(){

return 0;
}