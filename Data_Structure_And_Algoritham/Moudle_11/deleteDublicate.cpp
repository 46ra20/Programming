class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *tem = head;
        if (head == NULL)
            return head;
        while (tem->next != NULL)
        {
            if (tem->val == tem->next->val)
            {
                ListNode *dNote = tem->next;
                tem->next = tem->next->next;
                delete dNote;
            }
            else
                tem = tem->next;
        }
        return head;
    }
};