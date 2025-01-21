#include <vector>
#include <queue>
using namespace std;

class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k) {
        int s = points.size();
        auto compare = [this](vector<int>& p1, vector<int>& p2){
            return getDistance(p1) > getDistance(p2);
        };
        priority_queue<vector<int>, vector<vector<int>>, decltype(compare)> pq(compare);
        for (int i = 0; i < s; i++) {
            pq.push(points[i]);
        }

        vector<vector<int>> result;
        for (int i = 0 ; i < k; i++){
            result.push_back(pq.top());
            pq.pop();
        }
        return result;
    }
    
    private:
    int getDistance(const vector<int>& p1) {
        return (p1[0] * p1[0] + p1[1] * p1[1]);
    }
};
