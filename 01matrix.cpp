#include <vector>

using namespace std;

class Solution {
  public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &mat) {
        int r = mat.size();
        int c = mat[0].size();
        const int INF = r + c;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (mat[i][j] == 0)
                    continue;
                int top = INF, left = INF;
                if (j > 0)
                    left = mat[i][j - 1];
                if (i > 0)
                    top = mat[i - 1][j];
                mat[i][j] = min(top, left) + 1;
            }
        }
        for (int i = r - 1; i >= 0; i--) {
            for (int j = c - 1; j >= 0; j--) {
                if (mat[i][j] == 0)
                    continue;
                int bottom = INF, right = INF;
                if (j < c - 1)
                    right = mat[i][j + 1];
                if (i < r - 1)
                    bottom = mat[i + 1][j];
                mat[i][j] = min(mat[i][j], min(bottom, right) + 1);
            }
        }
        return mat;
    }
};
