#include<bits/stdc++.h>

using namespace std;

bool is_vowel(char ch)
{
    // Convert to lowercase to simplify the comparison
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y';
}

int main()
{
    string question;
    getline(cin, question);

    // cout<<question<<endl;

    // Find the last letter in the question
    char last_letter = ' ';
    for (int i = question.length() - 1; i >= 0; i--)
    {
        if (isalpha(question[i]))
        {
            last_letter = question[i];
            break;
        }
    }

    // Check if the last letter is a vowel and print the appropriate response
    if (is_vowel(last_letter))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}