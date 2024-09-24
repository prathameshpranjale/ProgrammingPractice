class Solution
{
public:
    pair<int, int> solve(int start, int end, string &s)
    {
        while (start >= 0 && end < s.size())
        {

            if (s[start] == s[end])
            {
                start--;
                end++;
            }
            else
            {
                break;
            }
        }
        // Adjust back to the actual palindrome bounds
        return {start + 1, end - 1};
    }

    string longestPalindrome(string s)
    {
        int n = s.size();
        if (n == 0)
            return "";

        int maxLength = 0;
        string ans = "";

        for (int i = 0; i < n; i++)
        {
            // Odd-length palindromes (single center)
            pair<int, int> odd = solve(i, i, s);
            int oddlen = odd.second - odd.first + 1;
            if (oddlen >= maxLength)
            {
                maxLength = oddlen;
                ans = s.substr(odd.first, oddlen);
            }

            pair<int, int> even = solve(i, i + 1, s);
            int evenlen = even.second - even.first + 1;
            if (evenlen >= maxLength)
            {
                ans = s.substr(even.first, evenlen);
                maxLength = evenlen;
            }
        }

        return ans;
    }
};