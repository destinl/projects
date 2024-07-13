// 给出一个大小为n的序列a，每次操作可以选择序列a中的一个数x，把x变成x*2或者[x/2]（对同一个a可以操作多次但不能既进行乘操作又进行除操作）。
// 问最少操作多少次使得a是不下降的。
// 输入
// 5
// 10 10 5 6 4
// 输出
// 3

#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

const long long MAXN = 1e18;
unordered_map<long long, int> dp[20005];

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    dp[0][1] = 0;

    for (int i = 0; i < n; ++i) {
        for (auto& [j, steps] : dp[i]) {
            if (nums[i] >= j) {
                // 不变
                if (dp[i + 1].find(nums[i]) == dp[i + 1].end() || dp[i + 1][nums[i]] > steps) {
                    dp[i + 1][nums[i]] = steps;
                }

                // 变大
                long long num = nums[i];
                int cnt = 0;
                while (num <= MAXN) {
                    num *= 2;
                    cnt++;
                    if (dp[i + 1].find(num) == dp[i + 1].end() || dp[i + 1][num] > steps + cnt) {
                        dp[i + 1][num] = steps + cnt;
                    }
                    if (num > MAXN / 2) break;
                }

                // 变小
                num = nums[i];
                cnt = 0;
                while (num / 2 >= j) {
                    cnt++;
                    num /= 2;
                    if (dp[i + 1].find(num) == dp[i + 1].end() || dp[i + 1][num] > steps + cnt) {
                        dp[i + 1][num] = steps + cnt;
                    }
                }
            } else {
                // 只能变大
                long long num = nums[i];
                int cnt = 0;
                while (num <= MAXN) {
                    num *= 2;
                    cnt++;
                    if (num >= j && (dp[i + 1].find(num) == dp[i + 1].end() || dp[i + 1][num] > steps + cnt)) {
                        dp[i + 1][num] = steps + cnt;
                    }
                    if (num > MAXN / 2) break;
                }
            }
        }
    }

    int ans = INT_MAX;
    for (auto& [k, v] : dp[n]) {
        if (v < ans) {
            ans = v;
        }
    }

    cout << ans << endl;

    return 0;
}

