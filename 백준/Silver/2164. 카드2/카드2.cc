#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    int n;
    queue<int> q;
    cin >> n;

    for(int i =1; i <= n; ++i){
        q.push(i);
    }

    while(q.size()>1){
        q.pop();
        q.push(q.front());
        q.pop();

    }
    cout << q.back();

}