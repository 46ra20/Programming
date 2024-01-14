// class Solution {
// public:
//     TreeNode* sortBST(vector<int>&v,int l,int r){
//         if(l>r) return NULL;
//         int mid = (l+r)/2;
//         TreeNode*root = new TreeNode(v[mid]);
//         TreeNode*leftNode = sortBST(v,l,mid-1);
//         TreeNode*rightNode = sortBST(v,mid+1,r);

//         root->left=leftNode;
//         root->right=rightNode;
//         return root;
//     }
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         // if(nums.empty()) return NULL;
//         TreeNode*r=sortBST(nums,0,nums.size());
//         return r;
//     }
// };

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node() {}
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *sortABST(vector<int> &v, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(v[mid]);
    Node *leftNode = sortABST(v, l, mid - 1);
    Node *rightNode = sortABST(v, mid + 1, r);
    root->left = leftNode;
    root->right = rightNode;
    return root;
}
void inOrder(Node *r)
{
    if (r == NULL)
        return;
    inOrder(r->left);
    cout << r->val << " ";
    inOrder(r->right);
}
int main()
{
    vector<int> v = {-10, -3, 0, 5, 9};
    Node *r = sortABST(v, 0, v.size() - 1);
    inOrder(r);
    return 0;
}