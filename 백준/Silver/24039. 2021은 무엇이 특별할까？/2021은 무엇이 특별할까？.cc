#include <iostream>
#include <bits/stdc++.h>
using namespace std;



vector<int> sieve(int n){
    vector<int> primes;
    vector<bool> state (n+1, true);
    state[1] = false;
    for (int i =2; i*i<=n; i++){
        if(!state[i]) continue;
        for (int j = i*i; j<=n; j+=i){
            state[j] = false;
        }
    }
    for (int i =2; i<= n; i++){
        if(state[i]) primes.push_back(i);
    }
    return primes;
}

int main() 
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> ans = sieve(20000);
    int n; cin >> n;
    for (int i  = 0; i +1 < ans.size() ;i++)
        if (ans[i]*ans[i+1] > n){
            cout << ans[i] *ans[i+1];
            break;
        } 
    
}
