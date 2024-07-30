#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    FAST;
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<string> grid(2);
        cin >> grid[0] >> grid[1];

        int result = 0;

        // Define directions: right, down, left, up
        int drow[] = {0, 1, 0, -1};
        int dcol[] = {1, 0, -1, 0};

        // Function to check if a cell is within grid bounds
        auto isValid = [&](int row, int col) {
            return row >= 0 && row < 2 && col >= 0 && col < n;
        };

        // Function to perform BFS and mark all reachable cells from (row, col)
        auto bfs = [&](vector<string>& grid, vector<vector<bool>>& visited, int row, int col) {
            queue<pair<int, int>> q;
            q.push({row, col});
            visited[row][col] = true;

            while (!q.empty()) {
                auto [r, c] = q.front();
                q.pop();

                for (int i = 0; i < 4; ++i) {
                    int nr = r + drow[i];
                    int nc = c + dcol[i];
                    if (isValid(nr, nc) && grid[nr][nc] == '.' && !visited[nr][nc]) {
                        visited[nr][nc] = true;
                        q.push({nr, nc});
                    }
                }
            }
        };

        // Function to count the number of connected regions
        auto countRegions = [&](vector<string> grid) {
            vector<vector<bool>> visited(2, vector<bool>(n, false));
            int regions = 0;

            for (int i = 0; i < 2; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (grid[i][j] == '.' && !visited[i][j]) {
                        ++regions;
                        bfs(grid, visited, i, j);
                    }
                }
            }

            return regions;
        };

        // Initial regions count
        int initialRegions = countRegions(grid);

        // Check each free cell to see if blocking it results in exactly 3 regions
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '.') {
                    grid[i][j] = 'x'; // Block the cell
                    int regions = countRegions(grid);
                    if (regions == 3) {
                        ++result;
                    }
                    grid[i][j] = '.'; // Restore the cell
                }
            }
        }

        cout << result << endl;
    }

    return 0;
}
