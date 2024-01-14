bool fg = false;
void isPresent(BinaryTreeNode<int> *r, int x)
{
    if (r == NULL)
        return;
    if (r->data == x)
    {
        fg = true;
        return;
    }
    isPresent(r->left, x);
    isPresent(r->right, x);
}

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    // Write your code here
    fg = false;
    isPresent(root, x);
    return fg;
}