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
public:
    TreeNode* xparent=nullptr, *yparent=nullptr;
    int xdepth=-1, ydepth=-1; //any value
    bool isCousins(TreeNode* root, int x, int y) {
        
        dfs(root,nullptr,x,y,0);
        
        return xdepth==ydepth && xparent!=yparent;
    }
    
    void dfs(TreeNode* root, TreeNode* parent, int x, int y, int depth){
        if(root==nullptr){
            return;
        }
        if(x==root->val){
            xdepth=depth;
            xparent=parent;
        }
        else if(y==root->val){
            ydepth=depth;
            yparent=parent;
        }
        else{
            dfs(root->left,root,x,y,depth+1);
             dfs(root->right,root,x,y,depth+1);
        }
    }
};
