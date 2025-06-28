//Program in C to store details of all the students of a class in an array of structure and then display the same in a tabular format
#include<stdio.h>

struct student {
    int rollNo;
    float marksObt;
    float totalMarks;
};

int main() {
    struct student s[100];
    int n;
    printf("Enter the number of students in class: ");
    scanf("%d", &n);
    for (int i = 0; i<n; i++) {
        printf("Enter roll number of student %d: ", i+1);
        scanf("%d", &s[i].rollNo);
        printf("Enter the marks obtained by the student %d: ", i+1);
        scanf("%f", &s[i].marksObt);
        printf("Enter the total marks: ");
        scanf("%f", &s[i].totalMarks);
    }

    //display details

    printf("Roll number \t Marks Obtained \t Total Marks \n");
    for (int i = 0; i < n; i++) {
        printf("%d \t %f \t %f \n", s[i].rollNo, s[i].marksObt, s[i].totalMarks);
    }
}
