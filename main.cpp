#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 1;
    while (n != 0) {
        printf("Input a number to show divisors of - 0 to end  ");
        scanf("%d", &n);

        printf("the divisors of n are: ");
        printf("1 ");
        for (int i = 2; i <= n/2;  i++)
            if (n%i == 0)
                printf("%d ", i);
        printf("%d  ", n);
        return 0;
    }
}
