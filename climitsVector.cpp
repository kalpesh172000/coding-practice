#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void miniMaxSum(vector<int> arr) {
    int min = INT_MAX;
    int max = INT_MIN;
    long sum = 0; 
    for(int i = 0 ; i < 5;i++){
        sum += arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<sum-max<<" "<<sum-min;
}


int main()
{
    return 0;
}