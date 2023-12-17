class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        int x = node->next->val;
        ListNode *dNode = node->next;
        node->val = x;
        node->next = node->next->next;
        delete dNode;
    }
};