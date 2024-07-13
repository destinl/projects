// #include<cstdio>
// #include<iostream>
// #include<algorithm>
// #include <string.h>

// typedef long long ll;
// const int N = 200010;

// int n;
// int a[N], tr[N];
// ll sum[N], f[N];

// int lowbit(int x){
//     return x & -x;
// }

// void modify(int x, int k){
//     for(int i = x; i <= 2*n+5; i += lowbit(i))
//         tr[i] += k;
// }

// int query(int x){
//     int res = 0;
//     for(int i = x; i; i -= lowbit(i))
//         res += tr[i];
//     return res;
// }

// int main(){
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++)
//         scanf("%d", &a[i]);
//     ll ans = 0;
//     for(int i = 1; i <= n; i++){
//         modify(a[i], 1);
//         sum[i] = sum[i-1] + i - query(a[i]);

//     }
//     memset(tr, 0, sizeof tr);
//     for(int i = n; i >= 1; i--){
//         f[i] = sum[i-1] + sum[n] - sum[i] + i - 1 - query(a[i]);
//         modify(a[i], 1);
//     }
//     for(int i = 1; i <= n; i++)
//         printf("%lld ", f[i]);
//     puts("");
//     return 0;
// }




// #include <algorithm>
// #include <iostream>
// using namespace std;
// const int N = 100007;
// pair<int, int> a[N], b[N];
// int cmp(pair<int, int> a, pair<int, int> b){
//     return a.first < b.first;
// }
// int cmp1(pair<int, int> a, pair<int, int> b){
//     return a.second < b.second;
// }
// int main() {
//     int n = 0, num = 0;
//     cin >> n;
//     num = n;
//     int a1, b1;
//     int i = 0;
//     while(num--){
//         cin >> a1 >> b1;
//         a[i].first = b1;
//         a[i].second = a1;
//         i++;
//     }
//     sort(a, a+n, cmp);
//     // for(int j = 0; j < n; j++){
//     //     cout << a[j].first << " " << a[j].second << "|";
//     // }
//     // i = 0;
//     // while(n--){
//     //     cout << a[i].first << endl;
//     //     i++;
//     // }
//     int k = 0, ans = 0;
//     for(int j = 0; j < n; j++){
//         if(a[j].first <=9 && a[j+1].first > 9){
//             sort(a, a+j+1, cmp1);
//             // for(int l = j; l; l--)
            
//             if(j < 1){
//                 ans += a[j].second;
//             }else{
//                 int l = 2;
//                 while(l){
//                     if(a[j-l+1].first )
//                     ans += a[j-l+1].second;
//                     l--;
//                 }
//             }
//             k = j;
//         }else if(a[j].first <=16 && a[j+1].first > 16){
//             sort(a+k+1, a+j+1, cmp1);
//             // for(int l = j; l; l--)
            
//             if(j-k < 6){
//                 for(int l = k+1; l <= j; l++){
//                     ans += a[l].second;
//                 }
                
//             }else{
//                 int l = 6;
//                 while(l){
//                     ans += a[j-l+1].second;
//                     l--;
//                 }
//             }
//             k = j;
//         }else if(a[j].first <=22 && a[j+1].first > 22){
//             sort(a+k+1, a+j+1, cmp1);
//             // for(int l = j; l; l--)
            
//             if(j-k < 5){
//                 for(int l = k+1; l <= j; l++){
//                     ans += a[l].second;
//                 }
                
//             }else{
//                 int l = 5;
//                 while(l){
//                     ans += a[j-l+1].second;
//                     l--;
//                 }
//             }
//             k = j;
//         }else if(a[j].first <=30 && (j+1 ==n || a[j+1].first > 30)){
//             sort(a+k+1, a+j+1, cmp1);
//             // for(int l = j; l; l--)
            
//             if(j-k < 6){
//                 for(int l = k+1; l <= j; l++){
//                     ans += a[l].second;
//                 }
                
//             }else{
//                 int l = 6;
//                 while(l){
//                     ans += a[j-l+1].second;
//                     l--;
//                 }
//             }
//             k = j;
//         }
//     }
//     cout << ans;
// }
// 64 位输出请用 printf("%lld")
// 1 3|8 35|8 2|    
//10 9|11 31|11 21|13 11|15 24|15 84| 
//17 55|17 16|17 61|21 9|22 18|
//24 44|25 29|25 27|25 5|28 35|28 12|   
//31 99



// #include <iostream>
// using namespace std;
// const int N = 101;
// int g[N], m[N];
// int ans = 10000000;
// void dfs(int i, int n, int num, int pk){
//     // if( )
//     if(i > n-1)return;
//     if(pk >= g[i]){
        
//         if( i == n-1){
//             if(num < ans){
//                 ans = num;
                
//             }
//             return;
//         }
//         dfs(i+1, n, num+m[i], pk+g[i]);
//         dfs(i+1, n, num, pk);
//         //dfs();
//     }else{
//         if(num > ans) return;
//         dfs(i+1, n, num+m[i], pk+g[i]);
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     for(int i = 0; i <n; i++){
//         cin >>g[i]; 
//     }
//     for(int i = 0; i <n; i++){
//         cin >>m[i]; 
//     }
//     dfs(0, n, 0, 0);
//     cout << ans;
// }


