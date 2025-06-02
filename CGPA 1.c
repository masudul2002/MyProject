#include <stdio.h>

int main() {
    float cgpa;
    int grade;

    // Input CGPA from user
    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    // Calculate grade based on CGPA
    if (cgpa >= 4.00 && cgpa <= 5.00) {
        grade = 1; // A+
    } else if (cgpa >= 3.50 && cgpa < 4.00) {
        grade = 2; // A
    } else if (cgpa >= 3.00 && cgpa < 3.50) {
        grade = 3; // B+
    } else if (cgpa >= 2.50 && cgpa < 3.00) {
        grade = 4; // B
    } else if (cgpa >= 2.00 && cgpa < 2.50) {
        grade = 5; // C+
    } else if (cgpa >= 1.50 && cgpa < 2.00) {
        grade = 6; // C
    } else if (cgpa >= 1.00 && cgpa < 1.50) {
        grade = 7; // D
    } else {
        grade = 8; // F (Fail)
    }

    // Switch case to output result based on grade
    switch (grade) {
        case 1:
            printf("Your grade is A+ with CGPA %.2f. Excellent!\n", cgpa);
            break;
        case 2:
            printf("Your grade is A with CGPA %.2f. Very Good!\n", cgpa);
            break;
        case 3:
            printf("Your grade is B+ with CGPA %.2f. Good!\n", cgpa);
            break;
        case 4:
            printf("Your grade is B with CGPA %.2f. Satisfactory.\n", cgpa);
            break;
        case 5:
            printf("Your grade is C+ with CGPA %.2f. Needs Improvement.\n", cgpa);
            break;
        case 6:
            printf("Your grade is C with CGPA %.2f. Needs Improvement.\n", cgpa);
            break;
        case 7:
            printf("Your grade is D with CGPA %.2f. Poor performance.\n", cgpa);
            break;
        case 8:
            printf("Your grade is F with CGPA %.2f. Fail.\n", cgpa);
            break;
        default:
            printf("Invalid CGPA value.\n");
    }

    return 0;
}

