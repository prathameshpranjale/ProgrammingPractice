#include <iostream>
#include <set>
using namespace std;

// Function to generate knight moves from a given position
set<pair<int, int>> generate_knight_moves(int x, int y, int a, int b)
{
    set<pair<int, int>> moves;
    int dx[] = {a, a, -a, -a, b, b, -b, -b};
    int dy[] = {b, -b, b, -b, a, -a, a, -a};

    for (int i = 0; i < 8; i++)
    {
        // Original move
        moves.insert({x + dx[i], y + dy[i]});
        // Swap a and b
        moves.insert({x + dy[i], y + dx[i]});
    }
    return moves;
}

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--)
    {
        int a, b; // Knight move distances
        cin >> a >> b;

        int xK, yK; // King's coordinates
        cin >> xK >> yK;

        int xQ, yQ; // Queen's coordinates
        cin >> xQ >> yQ;

        // Generate knight moves that attack the king
        set<pair<int, int>> king_attacks = generate_knight_moves(xK, yK, a, b);

        // Generate knight moves that attack the queen
        set<pair<int, int>> queen_attacks = generate_knight_moves(xQ, yQ, a, b);

        // Find the intersection of both sets
        int count = 0;
        for (auto position : king_attacks)
        {
            if (queen_attacks.find(position) != queen_attacks.end())
            {
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}
