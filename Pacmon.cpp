#include <stdio.h>

#include <string.h>

int dx[4] = {0,-1,0,1};
int dy[4] = {-1,0,1,0};
char board[110][110];
int visited[110][110];
int count = 0;

void move(int x, int y, int R, int C) {
  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if ((nx >= 0 && ny >= 0) && (nx < C && ny < R) && board[ny][nx] != '#' && visited[ny][nx] == 0) {
      if (board[ny][nx] == '*') {
        count++;
      }
      visited[ny][nx] = 1;
      move(nx, ny, R, C);
    }
  }
}

int main() {
  int tc;
  int R, C;
  scanf("%d", & tc);
  
  for (int t = 0; t < tc; t++) {
    memset(visited, 0, sizeof(visited));
    count = 0;
    scanf("%d %d", & R, & C);
    int sx, sy;
    for (int i = 0; i < R; i++) {
      scanf("%s", & board[i]);
      for (int j = 0; j < C; j++) {
        if (board[i][j] == 'P') {
          sx = j;
          sy = i;
        }
      }
    }
    move(sx, sy, R, C);
    printf("Case #%d: %d\n", t + 1, count);
  }
  return 0;
}
