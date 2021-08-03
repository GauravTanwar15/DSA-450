#include <iostream>
using namespace std;
int minvalue(Node* root)
{
    if(root->left)
    return minvalue(root->left);

    else return root->data;
}
int main(){

return 0;
}