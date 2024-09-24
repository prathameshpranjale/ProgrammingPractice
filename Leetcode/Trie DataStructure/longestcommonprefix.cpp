class TrieNode
{
public:
    TrieNode *children[26];

    TrieNode()
    {
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};

class Trie
{

    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode();
    }

public:
    void insert(string str)
    {
        TrieNode *node = root;
        for (auto x : str)
        {
            int ch = x - 'a';
            if (node->children[ch] == NULL)
            {
                node->children[ch] = new TrieNode();
            }
            node = node->children[ch];
        }
    }

    int searchlcp(string str)
    {
        TrieNode *node = root;
        int res = 0;
        for (auto x : str)
        {
            int id = x - 'a';
            if (node->children[id] != NULL)
            {
                node = node->children[id];
                res++;
            }
            else
            {
                break;
            }
        }

        return res;
    }
};

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        Trie node;
        node.insert(strs[0]);
        int maxi = INT_MAX;
        for (int i = 1; i < strs.size(); i++)
        {
            maxi = min(maxi, node.searchlcp(strs[i]));
        }

        return strs[0].substr(0, maxi);
    }
};