#include <iostream>
#include <vector>

using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int i = 0, 
    j = 0, 
    l = arr.size(),
    k = l-1, 
    sum1 = 0, 
    sum2 = 0;

    while(i < l){
        sum1 += arr[i][j];
        sum2 += arr[i][k];
        i++;
        j++;
        k--;
    }
    return sum1-sum2;
}

int main()
{
    return 0;
}