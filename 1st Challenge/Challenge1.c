#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    float total, average, percentage;

    printf("Enter marks for five subjects:\n");

    scanf("%d", &m1);
    scanf("%d", &m2);
    scanf("%d", &m3);
    scanf("%d", &m4);
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5;
    percentage = (total / 500) * 100;

    printf("Total Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}
