#include <stdio.h>
#include <stdlib.h>

int main() {
    int tc;
    scanf("%d", &tc);
    for (int t = 0; t < tc; t++) {
        int n;
        scanf("%d", &n);

        int (*A)[n], (*B)[n], (*C)[n], (*D)[n];
        A = (int (*)[n])malloc(n * n * sizeof(int));
        B = (int (*)[n])malloc(n * n * sizeof(int));
        C = (int (*)[n])malloc(n * n * sizeof(int));
        D = (int (*)[n])malloc(n * n * sizeof(int));

        // Input matrices A, B, and C
        int *ptr = &A[0][0];
        for (int i = 0; i < n * n; i++) {
            scanf("%d", ptr);
            ptr++;
        }

        ptr = &B[0][0];
        for (int j = 0; j < n * n; j++) {
            scanf("%d", ptr);
            ptr++;
        }

        ptr = &C[0][0];
        for (int k = 0; k < n * n; k++) {
            scanf("%d", ptr);
            ptr++;
        }

        // Perform matrix multiplication D = ABC
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int sum = 0;
                int *ptr1 = &A[i][0];
                int *ptr2 = &B[0][j];
                for (int k = 0; k < n; k++) {
                    sum += (*ptr1) * (*ptr2);
                    ptr1++;
                    ptr2 += n;
                }
                D[i][j] = sum;
            }
        }

        // Output matrix D
        printf("Case #%d:\n", t+1);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int sum = 0;
                int *ptr1 = &D[i][0];
                int *ptr2 = &C[0][j];
                for (int k = 0; k < n; k++) {
                    sum += (*ptr1) * (*ptr2);
                    ptr1++;
                    ptr2 += n;
                }
                printf("%d ", sum);
            }
            printf("\n");
        }

        free(A);
        free(B);
        free(C);
        free(D);
    }
    return 0;
}

