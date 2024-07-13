vector<int> a, b;
    // for(int i = 0; i < n; i++){
    //     int j = i;
    //     while(j < n && s[j] != ',') ++j;
    //     string ss = s.substr(i, j-i);
    //     int p = ss.find(':');
    //     a.push_back(stoi(ss.substr(0, p)));
    //     b.push_back(stoi(ss.substr(p+1)));
    // }
    // auto it = lower_bound(a.begin(), a.end(), f) - a.begin();
    // double ans = 0;
    // if(it >= a.size()) ans = b.back();
    // else{
    //     if(a[it] == f || it == 0) ans = b[it];
    //     else{
    //         int d1 = abs(a[it] - f), d2 = abs(a[it-1] - f);
    //         if(d1 < d2) ans = b[it];
    //         else if(d1 > d2) ans = b[it-1];
    //         else ans = (b[it-1] + b[it])/2.0; 
    //     }
    // }
    