#include <stdio.h>

int main() {
    int N;
    printf("請輸入測試案例數量：");
    scanf("%d", &N);

    // 宣告二維陣列來儲存帳號、密碼和餘額
    int accounts[N][2]; // 第一欄是帳號，第二欄是密碼
    int balances[N];    // 帳戶餘額

    // 讀取帳號、密碼和餘額
    for (int i = 0; i < N; i++) {
        printf("請輸入第%d組帳號和密碼：", i + 1);
        scanf("%d %d %d", &accounts[i][0], &accounts[i][1], &balances[i]);
    }

    // 查詢帳戶餘額
    int account, password;
    printf("請輸入帳號和密碼：");
    scanf("%d %d", &account, &password);

    // 遍歷所有帳戶，查找匹配的帳戶
    for (int i = 0; i < N; i++) {
        if (account == accounts[i][0] && password == accounts[i][1]) {
            printf("帳戶餘額：%d\n", balances[i]);
            return 0; // 結束程式
        }
    }

    printf("error\n");
    return 0;
}

