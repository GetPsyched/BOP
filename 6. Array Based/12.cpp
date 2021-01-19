#include <stdio.h>
int main() {
    int r, c, i, j,a[10][10], b[10][10], sum[10][10];
    printf("Enter the number of rows ");
    scanf("%d", &r);
    printf("Enter the number of columns");
    scanf("%d", &c);


    printf("Enter elements of 1st matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
                        printf("%d   ", sum[i][j]);
               if (j == c - 1) {
                printf("\n\n");
            }
        }
    }


    return 0;
}
