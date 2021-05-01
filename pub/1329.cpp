//
//  main.cpp
//  Cpp Universal
//
//  Created by 李君好 on 2021/4/26.
//

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <queue>
#include <stack>
#include <vector>
#define rep(a,c) for (int a=1;a<=c;a++)
#define MA 61

using namespace std;

int h, w, sx, sy, ans = 1;
char map[55][55];

int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

void dfs(int x0, int y0) {
    for (int i = 0; i < 4; ++i) {
        int x = x0 + dir[i][0];
        int y = y0 + dir[i][1];
        if (map[x][y] == '.') {
            ++ans;
            map[x][y] = '#';
            dfs(x, y);
        }
    }
}

int main() {
    cin >> h >> w;
    for (int i = 1; i <= w; ++i) {
        for (int j = 1; j <= h; ++j) {
            cin >> map[i][j];
            if (map[i][j] == '@') {
                sx = i;
                sy = j;
            }
        }
    }
    dfs(sx, sy);
    printf("%d",ans);
    
    return 0;
}
