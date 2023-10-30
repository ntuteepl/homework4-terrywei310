#include <stdio.h>

int main() {
    int n;
    printf("請輸入情侶數量（1≤n≤10）：");
    scanf("%d", &n);

    int feelings[n][n]; // 好感度矩陣
    // 讀取好感度矩陣
    printf("請輸入好感度矩陣（每行%d個整數，表示男生對所有女生的好感度）：\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &feelings[i][j]);
        }
    }

    // 尋找最佳情侶配對
    printf("最佳情侶配對結果：\n");
    for (int i = 0; i < n; i++) {
        int max_feeling = feelings[i][0]; // 初始化為第一位女生的好感度
        int girl_idx = 0;
        // 找尋男生 i 對哪位女生好感度最高
        for (int j = 1; j < n; j++) {
            if (feelings[i][j] > max_feeling) {
                max_feeling = feelings[i][j];
                girl_idx = j;
            }
        }
        printf("boy %d pair with girl %d.\n", i + 1, girl_idx + 1);
    }

    return 0;
}


