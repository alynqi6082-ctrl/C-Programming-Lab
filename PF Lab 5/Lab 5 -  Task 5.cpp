#include <stdio.h>

int main() {
    int course;
    char grade;

    printf("Enter course number (1, 2, or 3): ");
    scanf("%d", &course);

    switch (course) {
        case 1:
        case 2:
        case 3:
            printf("Enter grade (A, B, C, D, F): ");
            scanf(" %c", &grade);  
 
            switch (grade) {
                case 'A': printf("Excellent\n"); break;
                case 'B': printf("Good\n"); break;
                case 'C': printf("Average\n"); break;
                case 'D': printf("Poor\n"); break;
                case 'F': printf("Fail\n"); break;
                default: printf("Invalid grade entered.\n"); break;
            }
            break;

        default:
            printf("Invalid course number.\n");
            break;
    }
    return 0;
}
