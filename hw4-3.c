#include <stdio.h>

// 定義陣列大小
#define ARRAYSIZE 101

// 函數：將訂單按照出發時間排序
void sortOrders(int startTimes[], int endTimes[], int n) {
    // 使用適當的排序演算法來排序 startTimes 和 endTimes 陣列
    // 這裡可以使用任何排序方法，例如氣泡排序、快速排序等
    // 在這個範例中，我們使用氣泡排序作為示範
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (startTimes[j] > startTimes[j + 1]) {
                // 交換出發時間
                int tempStart = startTimes[j];
                startTimes[j] = startTimes[j + 1];
                startTimes[j + 1] = tempStart;

                // 交換返回時間
                int tempEnd = endTimes[j];
                endTimes[j] = endTimes[j + 1];
                endTimes[j + 1] = tempEnd;
            }
        }
    }
}

int main() {
    int startTimes[ARRAYSIZE]; // 訂單的出發時間
    int endTimes[ARRAYSIZE];   // 訂單的返回時間
    int n = 0;                 // 訂單數量

    // 讀取訂單的出發時間和返回時間
    printf("請輸入訂單的出發時間和返回時間（以EOF結束）：\n");
    while (scanf("%d %d", &startTimes[n], &endTimes[n]) != EOF) {
        n++;
    }

    // 將訂單按照出發時間排序
    sortOrders(startTimes, endTimes, n);

    int drivers = 1; // 最少需要的司機數量，初始化為1（第一筆訂單至少需要一輛車）

    // 輸出每位司機的時程表
    for (int i = 0; i < n; i++) {
        if (i > 0 && startTimes[i] <= endTimes[i - 1]) {
            printf("Driver %d's schedule is %d %d\n", drivers, startTimes[i - 1], endTimes[i - 1]);
        }
        printf("Driver %d's schedule is %d %d\n", drivers, startTimes[i], endTimes[i]);
        if (i > 0 && startTimes[i] <= endTimes[i - 1]) {
            drivers++;
        }
    }

    // 輸出司機的數量
    printf("%d\n", drivers);

    return 0;
}
