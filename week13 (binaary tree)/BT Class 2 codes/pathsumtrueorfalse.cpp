
// https://leetcode.com/problems/path-sum/description/
class Solution {
public:
    bool solve(TreeNode* root, int target, int sum) {
        if(root == NULL) {
            return false;
        }
        // root pkka not null h 
        sum = sum + root->val;
        if(root->left == NULL && root->right == NULL) {
            //root is a leaf node 
            if(sum == target) {
                return true;
            }
            else {
                return false;
            }
        }
        bool leftAns  = solve(root->left, target, sum);
        bool rightAns = solve(root->right, target, sum);
        return leftAns  || rightAns;
        // if(leftAns == false && rightAns == false) {
        //     return false;
        // }
        // else if(leftAns == true && rightAns == false) {
        //     return true;
        // }
        // else if(leftAns == false && rightAns == true) {
        //     return true;
        // }
        // else {
        //     //leftAns == true && rightAns == true
        //     return true;
        // }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;

        bool ans  = solve(root, targetSum, sum);
        return ans;


    }
};
