#include <stdio.h>

#define MAX 500

int max(int a, int b) { return (a > b) ? a : b; }

int findMaxScore(int grid[MAX][MAX], int N, int M) {
    int dp[MAX][MAX];
    dp[0][0] = grid[0][0];

    for (int i = 1; i < N; i++) dp[i][0] = dp[i - 1][0] + grid[i][0];
    for (int j = 1; j < M; j++) dp[0][j] = dp[0][j - 1] + grid[0][j];

    for (int i = 1; i < N; i++)
        for (int j = 1; j < M; j++)
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];

    return dp[N - 1][M - 1];
}

int main() {
    int N, M, grid[MAX][MAX];
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &grid[i][j]);

    printf("%d\n", findMaxScore(grid, N, M));
    return 0;
}
