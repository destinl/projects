#include<bits/stdc++.h>
using namespace std;

int solve(int n, int k, const vector<int>& nums) {
    unordered_map<int, int> counter;
    for(int num : nums){
        counter[num]++;
    }

    vector<int> sorted_keys;
    for(const auto& pair : counter){
        sorted_keys.push_back(pair.first);
    }
    sort(sorted_keys.begin(), sorted_keys.end());

    for(int key : sorted_keys){
        if (counter[key] <= k ){
            return key;
        }
    }
    return -1;
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << solve(n, k, nums) << endl;
    return 0;
    
}


