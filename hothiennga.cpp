#include<bits/stdc++.h>
using namespace std;

const int N = 1500, d[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int f[N][N], m, n;
char s[N][N+1];
bool vst[N][N];

bool valid(int x, int y) { return x >= 0 && x < m && y >= 0 && y < n; }

void enter() {
    cin >> m >> n;
    for(int i = 0; i < m; ++i)
        cin >> s[i];
    for(int i = 0, c = '0'; i < m; ++i)
        for(int j = 0; j < n; ++j)
            if(s[i][j] == 'L') s[i][j] = c++;
}

void precal() {
    memset(f, -1, sizeof f);
    queue<pair<int, int> > q;
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            if(s[i][j] != 'X') f[i][j] = 0, q.push(make_pair(i, j));
    while(!q.empty()) {
        int x = q.front().first, y = q.front().second; q.pop();
        for(int k = 0; k < 4; ++k) {
            int u = x + d[k][0], v = y + d[k][1];
            if(valid(u, v) && f[u][v] == -1)
                f[u][v] = f[x][y] + 1, q.push(make_pair(u, v));
        }
    }
}

int solve() {
    queue<pair<int, int> > q1, q2;
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            if(s[i][j] == '0')
                q1.push(make_pair(i, j)), vst[i][j] = true;
    for(int step = 0; !q1.empty(); ++step) {
        while(!q1.empty()) {
            int x = q1.front().first, y = q1.front().second; q1.pop();
            q2.push(make_pair(x, y));
            for(int k = 0; k < 4; ++k) {
                int u = x + d[k][0], v = y + d[k][1];
                if(valid(u, v) && !vst[u][v] && f[u][v] <= step)
                    vst[u][v] = true, q1.push(make_pair(u, v));
            }
        }
        while(!q2.empty()) {
            int x = q2.front().first, y = q2.front().second; q2.pop();
            if(s[x][y] == '1') return step;
            for(int k = 0; k < 4; ++k) {
                int u = x + d[k][0], v = y + d[k][1];
                if(valid(u, v) && !vst[u][v] && f[u][v] <= step + 1)
                    vst[u][v] = true, q1.push(make_pair(u, v));
            }
        }
    }
    assert(false);
}

int main() {
    ios::sync_with_stdio(false);
    enter();
    precal();
    cout << solve();
    return 0;
}
