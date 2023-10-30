#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#define ARRAYSIZE 101
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    int numbers[ARRAYSIZE];

    printf("請輸入n：");
    scanf("%d", &n);
    assert(n >= 1 && n <= 50);

    printf("請輸入%d個正整數：\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("每個數字是否為質數：\n");
    for (int i = 0; i < n; i++) {
        if (isPrime(numbers[i])) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}


