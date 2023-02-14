#include <stdio.h>

int main() {
  FILE *fp = fopen("./testdata.in", "r");

  int tc;
  fscanf(fp, " %d", &tc);

  for (int t = 0; t < tc; t++) {
    int N, M;
    fscanf(fp, " %d %d", &N, &M);

    char F[N][101];
    int I, J;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        fscanf(fp, " %c", &F[i][j]);

        if (F[i][j] == 'F') {
          I = i;
          J = j;
        }
      }
    }

    for (int m = 1; m < M; m++) {
      for (int t = I; t > I - M && t >= 0; t--) {
        F[t][J] = 'F';

        for (int r = J + 1; r < J + M && r < N; r++) {
          F[t][r] = 'F';
        }

        for (int l = J - 1; l > J - M && l >= 0; l--) {
          F[t][l] = 'F';
        }
      }

      for (int b = I + 1; b < I + M && b < N; b++) {
        F[b][J] = 'F';

        for (int r = J + 1; r < J + M && r < N; r++) {
          F[b][r] = 'F';
        }

        for (int l = J - 1; l > J - M && l >= 0; l--) {
          F[b][l] = 'F';
        }
      }
    }

    printf("Case #%d:\n", t + 1);
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        printf("%c", F[i][j]);
      }
      printf("\n");
    }
    printf("\n");
  }
}
