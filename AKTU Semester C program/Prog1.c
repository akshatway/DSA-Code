#include <stdio.h>
// 1. WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained
void student_result(); // prototype
// main function
int main()
{
    student_result();
    return 0;
}

// function definition
void student_result()
{
    // logic here
    int m1, m2, m3, m4, m5, sum;
    float percentage;
    printf("Enter All five subject marks one by one:");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    sum = m1 + m2 + m3 + m4 + m5;
    percentage = sum / 5.0;
    printf("\n Total Marks is %d\n Your percentage is %.2f", sum, percentage);
    return;
}