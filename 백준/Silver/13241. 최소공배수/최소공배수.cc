#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b){
    if (a ==0) return b;
    return gcd(b%a, a);
}

long long int lcm(long long int a,long long int b){
    return (a*b) / gcd(a,b);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,t;
    cin >> a >> b;
    cout << lcm(a,b) << '\n';
    
}