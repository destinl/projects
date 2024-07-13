// #include<bits/stdc++.h>
// using namespace std;
// int k = 0;
// long long check(long long i, vector<long long> a){
//     long long prev = i==0?a.size()-1:i-1;
//     long long next = i==a.size()-1?0:i+1;
//     if(lcm(a[i],a[prev]+a[next]) > k) return a[i];
//     return 0;
// }
// int main(){
//     int n ;
//     cin >> n >> k;
//     vector<long long> x(n);
//     vector<long long> a;
//     vector<long long> ans;
//     long long sum = 0;
//     for(int i = 0; i < n; i++){
//         cin >> x[i];
//         a.push_back(x[i]);
//         sort(a.begin(), a.end());
//         sum = 0;
//         for(int j=0; j < a.size(); j++){
//             sum += check(j, a);
//         }
//         ans.push_back(sum);
//     }
//     for(auto i : ans){
//         cout << i << " ";
//     }
//     // cout << lcm(6, 12);
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<int, vector<int>> edges;

    int u, v;
    for(int i = 0 ; i <n-1; i++){
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    
    return 0;
}
