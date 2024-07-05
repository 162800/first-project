#include <stdio.h>
#include <string.h>

//C structure named Student
struct Student
{
    char firstName[30];
    char lastName[30];
    char email[50];
    char regNo[20];
    char dob[20];
    int age;
    char phoneNumber[20];
};

int main() {
    // Declare a variable of type struct Student
    struct Student stu;

    // Assign values to stu variable
    strcpy(stu.firstName, "DAVID");
    strcpy(stu.lastName, "ANDIEGO");
    strcpy(stu.email, "dandyandiego002@gmail.com");
    strcpy(stu.dob, "29/07/2004");
    strcpy(stu.phoneNumber, "+254769933440");
    strcpy(stu.regNo, "BSE-01-0048/20");
    stu.age = 19;

    printf("First Name: %s\n", stu.firstName);
    printf("Last Name: %s\n", stu.lastName);
    printf("Email: %s\n", stu.email);
    printf("D.O.B: %s\n", stu.dob);
    printf("Phone Number: %s\n", stu.phoneNumber);
    printf("Registration Number: %s\n", stu.regNo);
    printf("Age: %d\n", stu.age);

    return 0;
}
