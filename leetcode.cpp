#include<bits/stdc++.h>
using namespace std;


int main(){
    int T;
    cin >> T;
    while (T-- > 0) {
        int n, k;
        cin >> n >> k;
        int a[100010];
        int target = 1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == target) target++;
        }
        int res = n - target + 1;
        if(res % k == 0) res = res/k;
        else res = res/k + 1;
        cout << res << endl;
    }
    return 0;
    
}


