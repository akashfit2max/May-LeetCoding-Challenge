/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return build_tree(preorder,0,preorder.size()-1);
    }
    TreeNode* build_tree(vector<int>& preorder,int l,int r){
        if(l>r)
            return nullptr;
        TreeNode* root=new TreeNode(preorder[l]);
        //one element in tree
        if(l==r)
            return root;
        //next element
        int idx=l+1;
        while(idx<=r && preorder[idx]<preorder[l]){
            idx++;
        }
        root->left=build_tree(preorder,l+1,idx-1);
        root->right=build_tree(preorder,idx,r);
        
        return root;     
        
    }
};
