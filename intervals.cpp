#include <vector>

using namespace std;

class Solution {
  public:
    vector<vector<int>> insert(vector<vector<int>> &intervals,
                               vector<int> &newInterval) {
        int s = intervals.size();
        vector<vector<int>> result;
        int i = 0;
        while (i < s && intervals[i][1] < newInterval[0]) {
            result.push_back(intervals[i]);
            i++;
        }

        while (i < s && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(intervals[i][0], newInterval[0]);
            newInterval[1] = max(intervals[i][1], newInterval[1]);
            i++;
        }

        result.push_back(newInterval);

        while (i < s) {
            result.push_back(intervals[i]);
            i++;
        }
        return result;
    }
};
