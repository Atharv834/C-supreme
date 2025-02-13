/**
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //base cases
        if(root == NULL) {
            return NULL;
        }
        if(root == p) {                    //agar vohi root hi p ho toh
            return p;
        }
        if(root == q) {                    // root hi q ho toh 
            return q;
        }

        TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightAns = lowestCommonAncestor(root->right, p,q);

        if(leftAns == NULL && rightAns == NULL) {
            return NULL;
        }
        else if(leftAns == NULL && rightAns != NULL) {
            return rightAns;
        }
        else if(leftAns != NULL && rightAns == NULL) {
            return leftAns;
        }
        else {
            //leftAns != NULL && rightAns != NULL
            //ans => root NOde
            return root; 
        }



    }
};
