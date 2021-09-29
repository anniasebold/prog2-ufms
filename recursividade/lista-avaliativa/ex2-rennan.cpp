#include <stdio.h>
#define MAX 20

int conta(int n, int *W, int k);


int main() {
    int W[MAX];
    int i, k, n;

    fflush(stdin);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf(" %d", &W[i]);
    }

    fflush(stdin);
    scanf("%d", &k);

    printf("%d", conta(n, W, k));
    
    return 0;
}


int conta(int n, int *W, int k) {
    int count = 0;

    if (n == 0) {
        return count;
    }
    else {
        if (W[n - 1] == k) {
            count += 1;
        }

        if (n >= 1) {
            count += conta((n - 1), W, k);
        }
    }

    return count;
}