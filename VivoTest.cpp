#include<bits/stdc++.h>
#include <string>
using namespace std;
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param pat string字符串 
     * @param text string字符串 
     * @return int整型
     */
    map<char, int> M;
    int num = 0, sum = 0;
    void bfs(string q, string text){
        if(num == 0){
            if(text.find(q) != -1)
                sum++; 
            return;
        }
        for(auto i : M){
            q.push_back(i.first);
            if(M[i.first]) M[i.first]--;
            num--;
            bfs(q, text);
            q.pop_back();
            M[i.first]++;
            num++;
        }
    }
    string res(string s, string text){
        string q;
        // for(auto i : M)
        // {
        //     q.push_back(i.first);
        //     M[i.first]--;
        //     num--;
        //     while(num--){
        //         for(auto i : M){
        //             q.push_back(i.first);
        //             M[i.first]--;
        //         }
                    
        //     }

        //     M[i.first]++;
        // }

        return s;
    }
    int search(string pat, string text) {
        // write code here
        //vector<char> res;
        //res.erase(const_iterator position)
        num = pat.size();
        for(int i = 0; i < pat.size(); i++){
            if(text.find(pat[i]) == -1) return 0;
        }
        for(int i = 0; i < pat.size(); i++){
            if(M[pat[i]]) M[pat[i]]++;
            else  M[pat[i]] = 1;
        }
        string q;
        bfs(q, text);
        return sum;
    }
};
int main(){
    return 0;
}