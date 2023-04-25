#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
} s[5];

int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s[5].name, sizeof(s[5].name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s[5].roll);
    printf("Enter marks: ");
    scanf("%f", &s[5].marks);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s[5].name);
    printf("Roll number: %d\n", s[5].roll);
    printf("Marks: %.1f\n", s[5].marks);

    return 0;
}