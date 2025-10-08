#include <stdio.h>
#include <stdlib.h>
int main () {
    int gradeCount;
    printf("Enter number of exam grades: ");
    scanf("%d", &gradeCount);
    int grades[gradeCount];
    for (int i = 0; i < gradeCount; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &grades[i]);
    }
    int sum = 0;
    for (int i = 0; i < gradeCount; i++) {
        sum += grades[i];
    }
    double average = (double)sum / gradeCount;
    printf("Average grade: %.2f\n", average);
    return 0;
}