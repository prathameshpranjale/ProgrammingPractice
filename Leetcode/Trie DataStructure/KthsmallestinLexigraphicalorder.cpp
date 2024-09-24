class Solution
{
public:
    int findKthNumber(int n, int k)
    {
        int curr = 1;
        k--;

        while (k > 0)
        {
            int count_total_nodes = helper(curr, curr + 1, n);

            if (count_total_nodes > k)
            {
                curr *= 10;
                k -= 1;
            }
            else
            {
                curr++;
                k -= count_total_nodes;
            }
        }
        return curr;
    }

    int helper(long pre, long prenext, long n)
    {
        int count = 0;

        while (pre <= n)
        {
            count += min(prenext, n + 1) - pre;
            pre *= 10;
            prenext *= 10;
        }

        return count;
    }
};