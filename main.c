#include <stdio.h>
#include <stdlib.h>


int main() {

    printf("Zaichenko Bohdan IPZ-22008b\n");

    int p;

     printf("\nEnter the number of values p: ");
    scanf("%d", &p);

    if (p < 2 || p > 20) {
        printf("!!ERROR!!\n");
        return 0;
    }

    int numbers[p];
    printf("\nEnter %d values separated by space: ", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }

    int gg(int a, int b) {
        while (b != 0) {
            int temp=b;
            b=a % b;
            a=temp;
        }
        return a;
    }

    int findNSK(int a, int b) {
        int ok = gg(a, b);
        return (a*b)/ok;
    }

    int nsk=numbers[0];

    for (int i = 1; i < p; i++) {
        nsk=findNSK(nsk, numbers[i]);
    }

    printf("\nNSK: %d\n", nsk);

    return 0;
}
