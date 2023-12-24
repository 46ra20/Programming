int get_sum(stack<int> s)
{
    int sum = 0;
    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    return sum;
}
int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3)
{
    // Write your code here
    int sum1 = get_sum(stk1);
    int sum2 = get_sum(stk2);
    int sum3 = get_sum(stk3);
    while (1)
    {
        if (sum1 == sum2 && sum1 == sum3)
            break;
        if (sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= stk1.top();
            stk1.pop();
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= stk2.top();
            stk2.pop();
        }
        else
        {
            sum3 -= stk3.top();
            stk3.pop();
        }
    }
    return sum1;
}