// Last updated: 24/6/2025, 12:45:09 am
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    bool symmetric(TreeNode* root1,TreeNode* root2){
        if(root1==NULL&&root2==NULL){
            return true;
        }
        if((root1==NULL&&root2!=NULL)||(root1!=NULL&&root2==NULL)){
            return false;
        }

        if(root1->val==root2->val){
            bool leftbal=symmetric(root1->left,root2->right);
            bool rightbal=symmetric(root1->right,root2->left);
            return leftbal && rightbal;
        }else{
        return false;}
    }
public:
    bool isSymmetric(TreeNode* root) {
        return symmetric(root->left,root->right);
        
    }
};