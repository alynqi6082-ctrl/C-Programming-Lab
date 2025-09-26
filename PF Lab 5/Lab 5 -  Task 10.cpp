#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y) {
        if (x > z)
            printf("Largest = %d\n", x);
        else
            printf("Largest = %d\n", z);
} 

else {
        if (y > z)
            printf("Largest = %d\n", y);
        else
            printf("Largest = %d\n", z);
    }
    return 0;
}
