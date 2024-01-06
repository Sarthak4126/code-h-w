#include <stdio.h>

union student {
    char name[50];
    int roll;
    float perc;
};

struct student_info {
    union student data;
    int sub1;
    int sub2;
    int sub3;
};

int main() {
    struct student_info s[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter the details of student %d:\n", i + 1);

        printf("1. Name: ");
        scanf("%s", s[i].data.name);

        printf("2. Roll number: ");
        scanf("%d", &s[i].data.roll);

        printf("3. Percentage: ");
        scanf("%f", &s[i].data.perc);

        printf("4. Marks of subject 1: ");
        scanf("%d", &s[i].sub1);

        printf("5. Marks of subject 2: ");
        scanf("%d", &s[i].sub2);

        printf("6. Marks of subject 3: ");
        scanf("%d", &s[i].sub3);
    }
    for (int i = 0; i < 3; i++) {
        printf("\nDetails of student %d:\n", i + 1);
        printf("Name: %s\n", s[i].data.name);
        printf("Roll number: %d\n", s[i].data.roll);
        printf("Percentage: %.2f\n", s[i].data.perc);
        printf("Marks: %d, %d, %d\n", s[i].sub1, s[i].sub2, s[i].sub3);
    }

    return 0;
}
