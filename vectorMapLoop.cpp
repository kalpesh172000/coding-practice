#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int sum(vector<int> arr){
    unordered_map<int,int> m;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    for(auto x:m){
        if(x.second==1){
            return x.first;
        }
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,1,2,3,4};
    cout<<sum(arr)<<endl;
    return 0;
}