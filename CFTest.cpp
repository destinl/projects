#include<bits/stdc++.h>
using namespace std;
int main(){
    stringstream ss;
    ss << "0X" << uppercase << setfill('0') << setw(2) << hex << static_cast<int>(1122);
    cout << ss.str();
    cout <<"你好";
    return 0;
}

// //美食
// #include<bits/stdc++.h>
// using namespace std;
// int M[100007];
// int main(){
//     int n = 0;
//     cin >> n;
//     int *p = new int(n);
//     //map<int, int> M;
//     for(int i = 0; i < n; i++){
//         cin >> p[i];
//         M[p[i]]++;
//     }
//     sort(p, p+n);
//     // for(int i = 0; i < n; i++){
//     //     // cout<< M[i];
//     // }
//     int num = 0, pre = p[0], flag = 0;
//     for(int i = 0; i < n; i++){
//         while(M[p[i]] > 1){
//             // for(int j = 0; j < n; j++){
//             //     if(M[i.first+p[j]] == 0 ){
//             //         M[i.first+p[j]]++;
//             //         i.second--;
//             //         num++;
//             //     }
//             // }
//             for(int j = 0; j < n ; j++){
//                 if(i == j) continue;
//                 if(M[p[i]+p[j]] == 0){
//                     flag = 1;
//                     M[p[i]+p[j]]++;
//                     M[p[i]]--;
//                     p[i] = p[i]+p[j];
//                     //cout << M[i.first];
//                     num++;
//                     break;
//                 }
//             }
//             if(!flag){
                
//             }
//         }
//     }
//     // cout << num;
//     for(int i = 0; i < n; i++){
//         cout << p[i]<<endl;
//     }
//     return 0;
// }

//修复方程
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t = 0;
//     cin >> t;
//     while(t--){
//         string t;
//         cin >> t;
//         int e1 = 0, e2 = 0;
//         long long num1 = 0, num2 = 0;
//         long long numb1 = 0, numb2 = 0;
//         queue<int> q1, q2;
//         queue<char> p1, p2;
//         for(int i = 0; i < t.length()-1; i++){
//             if(t[i] == '='){
//                 if(num1){
//                     q1.push(num1);
//                     num1 = 0;
//                 }
//                 e2 = i+1;
//                 break;
//             }else if(t[i]-'0'>=0 && t[i]-'0' <=9){
//                 num1 *= 10;
//                 num1 +=t[i]-'0';
//             }else{
//                 if(num1){
//                     q1.push(num1);
//                     num1 = 0;
//                 }
//                 p1.push(t[i]);
//             }
//         }
//         for(int i = e2; i< t.length()-1; i++){
//             if(t[i]-'0'>=0 && t[i]-'0' <=9){
//                 num2 *= 10;
//                 num2 +=t[i]-'0';
//             }else{
//                 if(num2){
//                     q2.push(num2);
//                     num2 = 0;
//                 }
//                 p2.push(t[i]);
//             }
//         }
//         num2 *= 10;
//         num2 +=t[t.length()-1]-'0';
//         q2.push(num2);
//         // while(!q1.empty()){
//         //     int temp = q1.front();
//         //     cout << temp <<endl;
//         // }
//     }
//     return 0;
// }

