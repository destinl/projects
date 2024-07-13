// // #include<iostream>
// // #include<list>
// // #include<vector>

// // class HashTable{
// // private:
// // 	std::vector<std::list<std::pair<int, int>>> table;
// // 	int capacity;

// // 	int hashFuction(int key){
// //  		return key % capacity;   
// // 	}

// // public:
// // 	HashTable(int size):capacity(size){
// // 		table.resize(capacity); 
// // 	}

// // 	//插入元素
// // 	void insert(int key, int value){
// // 		int index = hashFuction(key);
// // 		for(auto it = table[index].begin(); it != table[index].end(); ++it){
// // 			if(it->first == key){
// // 				it->second = value;
// // 				return;
// // 			}
// // 		}
// // 		table[index].push_back({key, value});
// // 	}


// // 	//查找元素
// // 	int get(int key){
// // 		int index = hashFuction(key);
// // 		for(const auto& pair:table[index]){
// // 			if(pair.first == key){
// // 				return pair.second;
// // 			}
// // 		}
// // 		return -1;
// // 	}

// // 	//显示哈希表内容
// // 	void display(){
// // 		for(size_t i = 0; i < table.size(); ++i){
// // 			std::cout << "Index" << i <<":";
// // 			for(const auto& pair:table[i]){
// // 				std::cout << "(" << pair.first << "," << pair.second << ")";
// // 			} 
// // 			std::cout << std::endl;
// // 		}
// // 	}
// // };
// // int main(){
// // 	HashTable hashTable(10);

// // 	hashTable.insert(1, 10);
// // 	hashTable.insert(2, 20);  
// //     hashTable.insert(11, 110); // 这个键将会产生冲突，因为它和键1有相同的哈希值  
  
// //     // 显示哈希表内容  
// //     hashTable.display();  
  
// //     // 查找元素  
// //     std::cout << "Value for key 1: " << hashTable.get(1) << std::endl;  
// //     std::cout << "Value for key 11: " << hashTable.get(11) << std::endl;  
// //     std::cout << "Value for key 3 (not present): " << hashTable.get(3) << std::endl;  
  
// //     return 0;  
// // }



// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
// 	// vector<int> count;
// 	// int dp(vector<int>& coins, int rem){
// 	// 	if(rem < 0) return -1;
// 	// 	if(rem == 0) return 0;
// 	// 	if(count[rem-1] != 0) return count[rem-1];
// 	// 	int Min = INT_MAX;
// 	// 	for(int coin:coins){
// 	// 		int res = dp(coins, rem -coin);
// 	// 		if(res >= 0 && res < Min){
// 	// 			Min = res + 1;
// 	// 		}
// 	// 	}
// 	// 	count[rem-1] = Min = INT_MAX ? -1:Min;
// 	// 	return count[rem-1]; 
// 	// }

// public:
// 	int coinChange(vector<int>& coins, int amount){
// 		int Max = amount+1;
// 		vector<int> dp(amount+1, Max);
// 		dp[0] = 0;
// 		for(int i = 1; i <= amount; ++i){
// 			for(int j = 0; j < (int)coins.size(); ++j){
// 				if(coins[j] <= i){
// 					dp[i] = min(dp[i], dp[i-coins[j]]+1);
// 				}
// 			}
// 		}
// 		return dp[amount] > amount ? -1 : dp[amount];
// 	}
// };


// // 第一行输入两个正整数n,m，代表小美的朋友数量、暗恋的关系数量。
// // 接下来的m行，每行输入两个正整数u,v，代表第u个人暗恋第v个人。
// // 1\leq n,m \leq 10^5
// // 1\leq u,v \leq n
// // 保证每个人最多只会暗恋一个人。
// 3 3
// 1 2
// 2 3
// 3 1

// 1

// // 一个整数，代表小美的请客方案数。
// #include <iostream>
// using namespace std;
// const long long MOD = 1000000007;
// int p[100005];
// int flag = 0;
// int check(int* q, int n){
//     for(int i = 0; i < n; i++){
//         if(q[i]){
//             if(!q[p[i+1]-1]) return 0;
//             //可优化
//         }
//     }
//     return 1;
// }
// void cal(int* q, int n){
//     int i = 0;
//     for(i = 0; i < n-1; i++){
//         if(q[i] > 1){
//             q[i] = 0;
//             q[i+1]++;
//         }else{
//             break;
//         }
//     }
//     if(q[n-1] > 1) flag = 1;
//     return ;
// }
// int main() {
//     int n = 0, m = 0, u = 0,v = 0,num = 0;
//     cin >> n >> m;
//     int* q = new int[n];
//     for(int i = 0; i < n; i++)
//         q[i] = 0;
//     for(int i = 0; i < m; i++){
//         cin >> u >> v;
//         p[v] = u;
//     }

//     while(!flag){
//         q[0]++;
//         cal(q, n);
        
//         if(flag) break;
// 		num += check(q, n);
//         //cout << check(q, n) <<endl;
//         num %= MOD;
//     }
//     cout << num;
//     delete  [] q;
//     return 0;
// }


// 第一行输入一个正整数n，代表字符串长度。
// 第二行输入一个长度为n的、仅由小写字母组成的字符串。
// 1\leq n \leq 200000
// 5
// ababc

// 9
// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// const long long MOD = 1000000007;
// int p[26];
// long long cal(string s, char a, char b, int i){
//     for(int i = 0; i < s.size()-i+1; i++){
        
//     }
    
// }
// long long check(char a, char b, string s){
//     long long num = 0;
//     int n = min(p[a-'a'], p[b-'a']);
//     for(int i = 2; i <= n; i+=2){
//         num += cal(s, a, b, i);
//     }
//     return num;
// }
// int main() {
//     int n = 0;
//     cin >> n;
//     string s;
//     cin >> s;
//     for(int i = 0; i < s.size(); i++){
//         p[s[i]-'a']++;
//     }
//     long long num = 0;
//     for(int i = 0; i < 25; i++){
//         if(p[i] >= 2){
//             for(int j = i+1; j < 26; j++){
//                 if(p[j] >= 2)
//                     num += check('a'+i, 'a'+j, s);
//             }
//         }
//     }
//     cout << num;
//     return 0;
// }
// 64 位输出请用 printf("%lld")


// 第一行输入一个长度不超过 10^5 的字符串 s 。
// 第二行输入一个长度与 s 相等的字符串 t 。

// 第一行输出一个整数 m 表示答案。

// 接下来 m 行，每行输出用空格隔开的 i,j,c 表示选择第 i 个字符串的长度为 j 的前缀，将前缀所有字母变成 c 。

// aabc
// abcc

// 2
// 2 3 b
// 2 2 a

// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int p[100005];
// char q[100005];
// int Num;
// int main() {
//     string s, t;
//     char tmp = 'a';
//     cin >> s;
//     cin >> t;
//     int num1 = 0, num2 = 0, j = 0, num = 0;
//     for (int i = 0; i < s.size(); i++) {
//         if (s[i] == s[i + 1])num1++;
//         else break;
//     }
//     for (int i = 0; i < t.size(); i++) {
//         if (t[i] == t[i + 1])num2++;
//         else break;
//     }
//     for (int i = t.size()-1; i >= 0; i--) {
//         if (s[i] == t[i])continue;
//         else {
//             j = i;
//             break;
//         }
//     }
//     int flag = num1 > num2 ? 2: 1;
//     if (num1 > num2) {
//         tmp = t[j];
//         for (int i = j; i >= 0; i--) {
//             if (s[i] == tmp)continue;
//             else {
//                 tmp = s[i];
//                 p[Num] = i+1;
//                 q[Num] = tmp;
//                 Num++;
//                 num++;
//             }
//         }
//     }else{
//         tmp = s[j];
//         for (int i = j; i >= 0; i--) {
//             if (t[i] == tmp)continue;
//             else {
//                 tmp = t[i];
//                 p[Num] = i+1;
//                 q[Num] = tmp;
//                 Num++;
//                 num++;
//             }
//         }
//     }
//     cout << num << endl;
    
//     for(int i = 0; i < Num; i++){
//         cout << flag << " " << p[i] << " " << q[i] << endl;
//     }
//     return 0;
// }
// // 64 位输出请用 printf("%lld")
