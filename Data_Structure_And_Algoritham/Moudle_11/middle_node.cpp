class Solution
{
public:
    int size(ListNode *n)
    {
        int count = 0;
        while (n != NULL)
        {
            count++;
            n = n->next;
        }
        return count;
    }
    ListNode *middleNode(ListNode *head)
    {
        ListNode *tem = head;
        int sz = size(head);
        // cout<<sz<<endl;
        for (int i = 0; i < sz / 2; i++)
        {
            tem = tem->next;
        }
        // cout<<tem->val<<endl;
        return tem;
    }
};