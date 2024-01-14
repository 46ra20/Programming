
// class Solution {
// public:
//     vector<int>v;
//     void inOrder(TreeNode* &r){
//         if(r==NULL) return;
//         inOrder(r->left);
//         v.push_back(r->val);
//         inOrder(r->right);
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//         v.clear();
//         inOrder(root);
//         return v;
//     }
// };