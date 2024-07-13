// #include <iostream>
// using namespace std;
// int X = 0, Y = 0;

// int cal(int x, int y, int num){
//     if(x == y) return num;
//     if(x%X == 0 && x/X != 1 && y%Y == 0 && y/Y != 1) return -1;
//     if(x%Y == 0 && x/Y != 1 && y%X == 0 && y/X != 1) return -1;
    

//     // x1 = x+y;
//     // y1 = x-y;
//     // x = x1;
//     // y = y1;
//     int flag1 = cal(x+y, x-y, num+1);

//     int flag2 = cal(y, x, num+1);

//     if(flag1 != -1){
//         if(flag2 != -1){
//             return (flag1 > flag2 ? flag2:flag1);
//         }
//         else{
//             return flag1;
//         }
//     }
//     if(flag2 != -1) return flag2;
//     return 0;
// }
// int main() {
//     // int a, b;
//     // while (cin >> a >> b) { // 注意 while 处理多个 case
//     //     cout << a + b << endl;
//     // }

//     cin >> X >> Y;
//     cout << cal(X, Y, 0);
//     return 0;
// }
// // 64 位输出请用 printf("%lld")




// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// long long p = 998244353;

// int main() {
//     // int a, b;
//     // while (cin >> a >> b) { // 注意 while 处理多个 case
//     //     cout << a + b << endl;
//     // }
//     int n = 0;
//     cin >> n;
//     int* dp = new int[n+1];
//     int* DP = new int[n+1];
//     for(int i = 0; i < n+1; i++){
//         dp[i] = 0;
//         DP[i] = 0;
//     } 
//     dp[0] = 0, dp[1] = 0;
//     DP[0] = 1, DP[1] = 26;
//     for(int i = 2; i <= n; i++){
//         if(i%2 != 0){
//             //奇数
//             dp[i] = max(DP[i-1]*26*(i-1)%p, dp[i-2]*(i-2)/2*26%p);
//             DP[i] = max(DP[i-1]%p, dp[i-2]*(i-2)/2%p);
//         }else{
//             //偶数
//             dp[i] = max(DP[i-1]*25*(i-1)%p, dp[i-2]*(i-2)/2*26%p);
//             DP[i] = max(DP[i-1]%p, dp[i-2]*(i-2)/2%p);
//         }
//     }
//     cout << dp[n]%p;
//     return 0;
// }
// // 64 位输出请用 printf("%lld")

