#include <bits/stdc++.h>
using namespace std;


int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int n;
int arr[101][101];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int cx, cy;
    cin >> n;
    cin >> cx >> cy;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> arr[i][j];
        }
    }

    while (true) {
        cout << arr[cx][cy] << ' ';
        int dir = -1;
        for (int i = 0; i < 4; ++i) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if (nx <= 0 || ny <= 0 || nx > n || ny > n)
                continue;
            if (arr[cx][cy] < arr[nx][ny]) {
                dir = i;
                break;
            }
        }

        if (dir == -1) {
            break;
        }
        cx += dx[dir], cy += dy[dir];
    }
}