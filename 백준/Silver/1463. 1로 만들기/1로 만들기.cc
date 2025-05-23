#include <iostream>

using namespace std;

int dp[1'000'001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    fill(dp,dp+1'000'001, 2e9);
    dp[1] = 0;
    for(int i = 2; i <= n ; ++i){
        if(i%3 == 0) dp[i] = min(dp[i], dp[i/3] + 1);
        if(i%2 ==0) dp[i] = min(dp[i], dp[i/2]+1);
        dp[i] = min(dp[i], dp[i-1]+1);

    }

    cout << dp[n] <<'\n';

}
