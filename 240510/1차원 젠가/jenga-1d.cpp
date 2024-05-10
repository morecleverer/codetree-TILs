#include <bits/stdc++.h>
using namespace std;

int n;
int arr[101];
void pop(int s, int e) {
    vector<int> vec;
    for (int i = 1; i <= n; ++i) {
        if (i < s || i > e)
            vec.push_back(arr[i]);
    }
    n = vec.size();
    for (int i = 1; i <= n; ++i) {
        arr[i] = vec[i - 1];
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    int s, e;
    cin >> s >> e;
    pop(s, e);
    cin >> s >> e;
    pop(s, e);

    cout << n << '\n';
    for (int i = 1; i <= n; ++i) {
        cout << arr[i] << '\n';
    }
}