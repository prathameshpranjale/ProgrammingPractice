#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool can_form_decks(int n, long long k, const vector<long long> &a, long long size)
{
    long long total_cards = 0;
    long long decks_needed = 0;

    // Calculate total cards
    for (long long cards : a)
    {
        total_cards += cards;
    }

    // Calculate how many decks we would need given the card counts
    for (long long cards : a)
    {
        if (cards > 0)
        {
            decks_needed += (cards + size - 1) / size; // Ceil of cards/size
        }
    }

    // Calculate how many total decks can be formed with total cards and k
    long long total_decks_possible = (total_cards + k) / size;

    return total_decks_possible <= decks_needed;
}

long long max_deck_size(int n, long long k, const vector<long long> &a)
{
    long long left = 1, right = 0;
    for (long long cards : a)
    {
        right += cards; // Total cards
    }
    right += k; // Including the cards we can buy

    long long best_size = 0;

    while (left <= right)
    {
        long long mid = (left + right) / 2;
        if (can_form_decks(n, k, a, mid))
        {
            best_size = mid; // Found a valid size, try for bigger
            left = mid + 1;
        }
        else
        {
            right = mid - 1; // Size too large, try smaller
        }
    }

    return best_size;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        cout << max_deck_size(n, k, a) << "\n";
    }

    return 0;
}
