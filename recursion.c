#include <stdio.h>

// Recursive function to find  number of way to multiply mactrices
int c(int n) {
    if (n <= 1)
        return 1;

    int ways = 0;

    // Recurrence: Cn = sum(Ci * Cn-i-1)
    for (int i = 0; i < n; i++) {
        ways += c(i) * c(n - i - 1);
    }

    return ways;
}

int main() {
    int n;
    printf("Enter number of matrices: ");
    scanf("%d", &n);

    // Number of ways = Catalan(n-1)
    printf("Number of ways to multiply %d matrices = %d\n",
           n, c(n - 1));

    return 0;
}
