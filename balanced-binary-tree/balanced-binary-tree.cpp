class Solution {
public:
    
    
    bool ans;
    
    
    //additional function.. dfs np if return not int
    int checkBalance(TreeNode* root){
        if(!root)
            return 0;
        if(!ans) // if Answer is already False then return it.
            return 0;
        int leftSubTree = checkBalance(root->left);
        int rightSubTree = checkBalance(root->right);
        if(abs(leftSubTree-rightSubTree) > 1){
            ans = false;
        }
        return 1 + max(leftSubTree, rightSubTree);
    }
    
    
    //main function
    bool isBalanced(TreeNode* root){
        ans = true;
        int temp = checkBalance(root);
        return ans;
    }
};