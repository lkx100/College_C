#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            //if ( i == j ) printf("* ");
            if ( i + j == n + 1 ) printf("* ");
            else printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}